#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
int main()
{
   int t,m,n,q,r,c;
   cin>>t;
   while(t--)
   {
       cin>>m>>n>>q;
       cout<<m<<" "<<n<<" "<<q<<endl;
       vector<string> v(m);
       for(int i=0;i<m;i++)
       {
           cin>>v[i];
       }
       while(q--)
       {
           cin>>r>>c;
           int p=1;
           bool d=false;
           while(!d)
           {
                for(int i=r-p;i<=r+p;i++)
                {
                   if(r-p<0||r+p>=m)
                   {
                      d=true;
                      break;
                    }
                   for(int j=c-p;j<=c+p;j++)
                   {
                      if(c-p<0||c+p>=n)
                      {
                          d=true;
                          break;
                      }
                      if(v[r][c]!=v[i][j])
                      {
                         d=true;
                         break;
                      }
                    }
                    if(d)
                    {
                       break;
                    }
                }
                if(!d)
                { 
                  p++;
                }
           }
           cout<<2*(p-1)+1<<endl;
       }
   }
}
