error
#include <iostream>
using namespace std;
int main()
{
	int kuti, lakh, hajar, shata,a,b,no;
	int n = 1;
	int k = 1;
	int m = 1;
	int array[10];
	while (cin >> a)
	{
		while (a > 0)
		{
			array[n] = a % 10000000;
			a = a / 10000000;
			n++;
		}
		for (int i = n-1; i >= 0; i--)
		{
			int d = i;
			if (d >= (10000000))
			{
				cout << d / 10000000 << kuti;
				d = d % 10000000;
			}
			if (d >= (100000))
			{
				cout << d / 100000 << lakh;
				d = d % 100000;
			}
			if (d >= (1000))
			{
				cout << d / 1000 << hajar;
				d = d % 1000;
			}
			if (d >= (10000000))
			{
				cout << d / 10000000 << shata;
				d = d % 10000000;
			}
			if (i==1)
			{
				cout << d % 10000000;
			}
		}
		
		while (cin >> a)
		{
			int d = 0, t = k;
			do {
				d++;
				t /= 10;
			} while (t);

			for (int i = 0; i < 4 - d; i++)
				cout << " ";
			cout << k << " ";
		

			m++;


	}

}
--------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    long long a;
    int n = 1;
    int k = 1;
    int array[20];

    while (cin >> a)
    {
        // 1. 切段存陣列（從 1 開始）
        n = 1;
        while (a > 0)
        {
            array[n] = a % 10000000;
            a = a / 10000000;
            n++;
        }

        // 2. 印 case 編號（補空白到 4 格）
        int d = 0, t = k;
        do {
            d++;
            t /= 10;
        } while (t);

        for (int i = 0; i < 4 - d; i++)
            cout << " ";
        cout << k << " ";

        // 3. 反向印每段（注意 i 從 n-1 開始到 1）
        for (int i = n - 1; i >= 1; i--)
        {
            int d = array[i];

            if (d == 0) {
                if (i > 1) cout << " kuti";
                continue;
            }

            if (d >= 100000) {
                cout << " " << d / 100000 << " lakh";
                d %= 100000;
            }
            if (d >= 1000) {
                cout << " " << d / 1000 << " hajar";
                d %= 1000;
            }
            if (d >= 100) {
                cout << " " << d / 100 << " shata";
                d %= 100;
            }
            if (d > 0) {
                cout << " " << d;
            }

            if (i > 1) cout << " kuti";
        }

        cout << "\n";
        k++; // case 編號 +1
    }

    return 0;
}
------------------------------------------------------------
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
