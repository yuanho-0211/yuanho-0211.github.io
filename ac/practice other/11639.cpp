#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int q = 0;
    while (t--)
    {
        q++;
        bool g = false;
        vector<int>v(4);
        vector<int>w(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> v[i];
            cin >> w[i];
        }
        if (v[1] < v[2] || w[1] < w[2]|| v[3] < v[0] || w[3] < w[0])
        {
            g= true;
        }
        int b = (v[1] - v[0]) * (w[1]-w[0]) + (v[3] - v[2]) * (w[3]-w[2]);//2塊和
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        int x = v[2] - v[1];
        int y = w[2] - w[1]; 
        int a;
        if (g)
        {
            a = 0;
        }
        else
        {
            a = x * y;//重複
        }
        int c = b - 2 * a;//一個
        int d = 100 * 100 - c - a;//空白
        cout <<"Night "<<q<<": "<< a << " " << c << " " << d << endl;
    }
}
