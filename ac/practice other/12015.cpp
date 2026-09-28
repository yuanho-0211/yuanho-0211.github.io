#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    long long n;
    long long m;
    cin >> n;
    int u = 0;
    while (n--)
    {
        m = 0;
        u++;
        cout << "Case #" << u << ":" << endl;
        vector <int>a(11);
        vector<string>b(11);
        for (int i = 0; i < 11; i++)
        {
            cin >> b[i];
            cin >> a[i];
            if (m < a[i])
            {
                m = a[i];
            }
        }
        for (int i = 0; i < 11; i++)
        {
            if (a[i] == m)
            {
                cout << b[i] << endl;
            }
        }

    }
}
