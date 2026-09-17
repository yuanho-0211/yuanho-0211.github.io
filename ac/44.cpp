#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m,n;
    int p=0;
    bool c=false;
    int x[8]={-1,0,1,-1,1,-1,0,1};
    int y[8]={1,1,1,0,0,-1,-1,-1};
    while(cin>>m>>n)
    {
        if(m==0&&n==0)
        {
            break;
        }
        p++;
        if(c)
        {
            cout<<endl;
        }
        c=true;
        vector<string> a(m);
        vector<string> b(m,string(n,'.'));
        
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        int u;
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
                if(a[i][j]=='*')
                {
                   b[i][j]='*';
                   continue;
                }
               u=0;
               for(int k=0;k<8;k++)
               {
                   if(i+x[k]<0||i+x[k]>=m||j+y[k]<0||j+y[k]>=n)
                   {
                       continue;
                   }
                   if(a[i+x[k]][j+y[k]]=='*')
                   {
                       u++;
                   }
               }
               b[i][j]=char('0'+u);
           }
        }
        cout<<"Field #"<<p<<":"<<endl;
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
               cout<<b[i][j];
           }
           cout<<endl;
        }
    }
}
