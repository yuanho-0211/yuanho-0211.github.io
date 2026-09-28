#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long t;
    while (cin >> t)
    {
        if (t == 0)
        {
            break;
        }
        if (t < 0)
        {
            cout << "no" << endl;
            continue;
        }
        long long u = sqrt(t);
        if (u * u == t)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }

    }
}
