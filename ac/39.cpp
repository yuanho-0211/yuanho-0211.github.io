#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,h;
    double p,q;
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h)
    {
        double x[4]={a,c,e,g};
        double y[4]={b,d,f,h};
        double m=0,n=0;
        bool r=false;
        for(int i=0;i<4;i++)
        {
             for(int j=i+1;j<4;j++)
            {
                if(x[i]==x[j]&&y[i]==y[j])
                {
                    p=x[i];
                    q=y[i];
                    r=true;
                    break;
                }
            }
            if(r)
            {
                break;
            }
        }
        for(int i=0;i<4;i++)
        {
            if(x[i]!=p||y[i]!=q)
            {
                m=x[i]+m;
                n=y[i]+n;
            }
        }
        cout<<fixed<<setprecision(3)<<m-p<<" "<<n-q<<endl;
    }
}
