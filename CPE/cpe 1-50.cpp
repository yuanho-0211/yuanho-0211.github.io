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

