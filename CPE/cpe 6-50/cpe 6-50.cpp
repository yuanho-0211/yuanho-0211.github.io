#include <iostream>
using namespace std;

int main()
{
    long long a;
    int caseNum = 1;

    while (cin >> a)
    {
        /* case number（補空白） */
        int d = 0, t = caseNum;
        do {
            d++;
            t /= 10;
        } while (t);

        for (int i = 0; i < 4 - d; i++)
            cout << " ";
        cout << caseNum << " ";

        if (a == 0) {
            cout << "0\n";
            caseNum++;
            continue;
        }

        long long parts[20];
        int cnt = 0;

        /* 每 10^7 切一段 */
        while (a > 0) {
            parts[cnt++] = a % 10000000;
            a /= 10000000;
        }

        /* 從最左邊開始印 */
        for (int i = cnt - 1; i >= 0; i--)
        {
            long long n = parts[i];

            if (n == 0) {
                if (i > 0) cout << " kuti";
                continue;
            }

            if (n >= 100000) {
                cout << " " << n / 100000 << " lakh";
                n %= 100000;
            }
            if (n >= 1000) {
                cout << " " << n / 1000 << " hajar";
                n %= 1000;
            }
            if (n >= 100) {
                cout << " " << n / 100 << " shata";
                n %= 100;
            }
            if (n > 0) {
                cout << " " << n;
            }

            if (i > 0)
                cout << " kuti";
        }

        cout << endl;
        caseNum++;
    }
    return 0;
}
------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    long long a;
    int caseNum = 1;

    while (cin >> a)
    {
        /* ===== 印 case 編號（補空白到 4 格） ===== */
        int d = 0, t = caseNum;
        do {
            d++;
            t /= 10;
        } while (t);

        for (int i = 0; i < 4 - d; i++)
            cout << " ";
        cout << caseNum << " ";

        /* ===== 處理數字 ===== */
        if (a == 0)
        {
            cout << "0";
        }
        else
        {
            long long n = a;

            /* kuti（要重複） */
            if (n >= 10000000)
            {
                long long k = n / 10000000;

                // 印 kuti 前面的數字（不用函式，只用 while）
                long long stack[20];
                int top = 0;
                while (k > 0) {
                    stack[top++] = k % 100;
                    k /= 100;
                }
                for (int i = top - 1; i >= 0; i--)
                    cout << " " << stack[i];

                cout << " kuti";
                n %= 10000000;
            }

            if (n >= 100000) {
                cout << " " << n / 100000 << " lakh";
                n %= 100000;
            }
            if (n >= 1000) {
                cout << " " << n / 1000 << " hajar";
                n %= 1000;
            }
            if (n >= 100) {
                cout << " " << n / 100 << " shata";
                n %= 100;
            }
            if (n > 0) {
                cout << " " << n;
            }
        }

        cout << endl;
        caseNum++;
    }
    return 0;
}
