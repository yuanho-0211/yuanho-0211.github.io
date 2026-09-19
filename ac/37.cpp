#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a,b;
    string s;
    double pi=acos(-1);
    double p,m,n;
    while(cin>>a>>b>>s)
    {
        if(s=="deg")
        {
            if(b>180)
            {
               b=abs(360-b);
            }
            p=b*pi/180;
        }
        else if(s=="min")
        {
            p=b/60;
            if(b>180)
           {
               b=abs(360-b);
           }
           p=p*pi/180;
        }
        m=(6440+a)*p;
        n=2*(6440+a)*sin(p/2);
        cout<<fixed<<setprecision(6)<<m<<" "<<n<<endl;
    }
}
