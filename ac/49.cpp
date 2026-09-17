#include <iostream>
#include <algorithm>
#include <cmath>
#include<vector>
using namespace std;
int m;
bool s(int x,int y)
{
    int p,q;
    p=(x%m);
    q=(y%m);

    if(p==q)
    {
        if(abs(x%2)==0&&abs(y%2)==1)
        {
            //return x>y;
            //return x<y;
            return false;
        }
        if(abs(x%2)==1&&abs(y%2)==0)
        {
            //return x>y;
            //return x<y;
            return true;
        }
        if(abs(x%2)==1&&abs(y%2)==1)
        {
            return x>y;
        }
        if(abs(x%2)==0&&abs(y%2)==0)
        {
            return x<y;
        }
        return false;
    }
    else
    {
            return (p)<(q);
    }
}
int main()
{
    int n;
    while(cin>>n>>m)
    {
        cout<<n<<" "<<m<<endl;
        if(n==0&&m==0)
        {
            break;
        }
        vector <int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),s);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
        
    }
}
