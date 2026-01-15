# include <iostream>
using namespace std;
int main()
{
    int t, r, v;
    int a[500];
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> r;
        for (int j = 1; j <= r; j++)
        {
            cin >> a[j];
        }
        int min = 30000;
        for (int l = 1; l <= 30000; l++)
        {
            int b = 0;
            for (int k = 1; k <= r; k++)
            {
                int d = abs(a[k] - l);
                b = b + d;
            }
            if (b < min)
            {
                min = b;
            }
        }
        cout << min;
    }
}

-------------------------------------
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t, r;
    int a[500];

    cin >> t;
    while (t--)
    {
        cin >> r;
        for (int i = 0; i < r; i++)
        {
            cin >> a[i];
        }

        sort(a, a + r);          // 排序
        int mid = a[r / 2];      // 中位數

        int sum = 0;
        for (int i = 0; i < r; i++)
        {
            sum += abs(a[i] - mid);
        }

        cout << sum << endl;
    }
    return 0;
}
