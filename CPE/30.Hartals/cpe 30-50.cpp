#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, P;
        cin >> N >> P;

        vector<int> h(P);
        for (int i = 0; i < P; i++) {
            cin >> h[i];
        }

        vector<bool> lost(N + 1, false);

        for (int i = 0; i < P; i++) {
            for (int day = h[i]; day <= N; day += h[i]) {
                // 星期五 (day % 7 == 6) 和 星期六 (day % 7 == 0) 不算
                if (day % 7 != 6 && day % 7 != 0) {
                    lost[day] = true;
                }
            }
        }

        int count = 0;
        for (int day = 1; day <= N; day++) {
            if (lost[day]) count++;
        }

        cout << count << endl;
    }

    return 0;
}
