#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore(); // 吃掉換行
    cin.ignore(); // 吃掉第一個空白行

    while (T--)
    {
        map<string, int> cnt;
        string s;
        int total = 0;

        // 讀到空白行或 EOF
        while (getline(cin, s))
        {
            if (s == "")
                break;

            cnt[s]++;
            total++;
        }

        // 用 iterator 走訪 map（不用 auto）
        map<string, int>::iterator it;
        for (it = cnt.begin(); it != cnt.end(); it++)
        {
            double percent = (double)it->second * 100.0 / total;
            cout << it->first << " "
                 << fixed << setprecision(4)
                 << percent << endl;
        }

        // 不是最後一組才印空白行
        if (T)
            cout << endl;
    }

    return 0;
}
