error
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int min = 0;
	for (int i = a; i <= b; i++)
	{
		int c = 0;
		while (i != 1)
		{
			if (i % 2 == 0)
			{
				i = 3 * i + 1;
				c++;
			}
			else
			{
				i = i / 2;
				c++;
			}
	    }
		if(c>min)
		{
			min = c;
		}
	}
	cout << a << " "<<b << " "<<min << endl;
	return 0;
}
--------------------------------------------------
	#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int min = 0;
	for (int i = a; i <= b; i++)
	{
		int c = 0;
		int n = i;
		while (n != 1)
		{
			if (n % 2 == 1)
			{
				n = 3 * n + 1;
				c++;
			}
			else
			{
				n = n / 2;
				c++;
			}
	    }
		c = c + 1;
		if(c>min)
		{
			min = c;
		}
	}
	cout << a << " "<<b << " "<<min << endl;
	return 0;
}
---------------------------------------------------
	#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        int maxCycle = 0; // 儲存最大循環長度
        for (int i = a; i <= b; i++) {
            int n = i;
            int c = 1; // 從自己開始算
            while (n != 1) {
                if (n % 2 == 1)
                    n = 3 * n + 1;
                else
                    n = n / 2;
                c++;
            }
            if (c > maxCycle)
                maxCycle = c;
        }
        cout << a << " " << b << " " << maxCycle << endl;
    }
    return 0;
}
---------------------------------------------------------------
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        int start = min(a, b);
        int end   = max(a, b);

        int maxCycle = 0;

        for (int i = start; i <= end; i++) {
            long long n = i;
            int c = 1;  // 包含自己

            while (n != 1) {
                if (n % 2 == 1)
                    n = 3 * n + 1;
                else
                    n = n / 2;
                c++;
            }

            if (c > maxCycle)
                maxCycle = c;
        }

        // 輸出順序要照輸入的 a, b
        cout << a << " " << b << " " << maxCycle << endl;
    }
    return 0;
}
