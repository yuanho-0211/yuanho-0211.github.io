#include <iostream>
using namespace std;
int main()
{
    int m;
    string a;
    while(cin>>m)
    {
        int t=1,b=6,e=4,s=5,w=3,n=2;
        if(m==0)
        {
            break;
        }
        while(m--)
        {
            cin>>a;
            int u=0;
            if(a=="east")
            {
                u=t;
                t=w;
                w=b;
                b=e;
                e=u;
                
            }
            else if(a=="south")
            {
                u=t;
                t=n;
                n=b;
                b=s;
                s=u;
            }
            else if(a=="west")
            {
                u=t;
                t=e;
                e=b;
                b=w;
                w=u;
                
            }
            else if(a=="north")
            {
                u=t;
                t=s;
                s=b;
                b=n;
                n=u;
            }
        }
        cout<<t<<endl;
    }
}
