#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int gcd(int c,int d)
{
    if(d==0)
    {
        return c;
    }
    return gcd(d,c%d);
}
int main()
{
    int n;
    int u=1;
    string a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        int p=0,q=0,c=0,d=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]=='1')
            {
                c=c+pow(2,p);
            }
            p++;
        }
        for(int i=b.size()-1;i>=0;i--)
        {
            if(b[i]=='1')
            {
                d=d+pow(2,q);
            }
            q++;
        }
        int w=gcd(c,d);
        if(w==1)
        {
            cout<<"Pair #"<<u<<": Love is not all you need!"<<endl;
        }
        else
        {
            cout<<"Pair #"<<u<<": All you need is love!"<<endl;
        }
        u++;
    }
    
}

