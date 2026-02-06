#include <iostream>
#include <iomanip>
#include <utility>
#include <vector>
#include <set>
using namespace std;



int main() {
    pair<double, double> p[4];

    while (cin >> p[0].first >> p[0].second
        >> p[1].first >> p[1].second
        >> p[2].first >> p[2].second
        >> p[3].first >> p[3].second) {

        // 把四個點丟進 set（自動去重）
        set<pair<double, double>> s;
        for (int i = 0; i < 4; i++) {
            s.insert(p[i]);
        }

        pair<double, double> A, B, C;

        // 找出出現兩次的點 A
        for (int i = 0; i < 4; i++) {
            int cnt = 0;
            for (int j = 0; j < 4; j++) {
                if (p[i] == p[j]) cnt++;
            }
            if (cnt == 2) {
                A = p[i];
                break;
            }
        }

        // set 中剩下的三個點，拿出 B、C
        vector<pair<double, double>> v;
        for (auto pt : s) {
            if (pt != A) v.push_back(pt);
        }

        B = v[0];
        C = v[1];

        // 計算第四點
        double x = B.first + C.first - A.first;
        double y = B.second + C.second - A.second;

        cout << fixed << setprecision(3)
            << x << " " << y << "\n";
    }

    return 0;
}
