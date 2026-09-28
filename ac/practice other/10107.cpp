#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    vector <int>v;
    while (cin >> t)
    {
        v.push_back(t);
        if (v.size() == 1)
        {
            cout << v[0] << endl;
            continue;
        }
        sort(v.begin(), v.end());
        if (v.size() % 2 == 0)
        {
            cout << (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2 << endl;
        }
        else
        {
            cout << v[v.size() / 2] << endl;
        }

    }
}
