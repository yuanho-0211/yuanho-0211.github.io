#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,h;
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h)
    {
        double x[4]={a,c,e,g};
        double y[4]={b,d,f,h};
        
        int u=0;
        for(int i=0;i<4;i++)
        {
           for(int j=i+1;j<4;j++)
          {
            if(x[i]==x[j]&&y[i]==y[j])
             {
                u=i;
                break;
             }
           } 
        }
        double w=0;
        double p=0;
        for(int i=0;i<4;i++)
        {
           if(x[i]!=x[u]||y[i]!=y[u])
          {
             w=w+x[i];
             p=p+y[i];
          }
        }
        cout<<fixed<<setprecision(3)<<w-x[u]<<" "<<p-y[u]<<endl;
    }
}
