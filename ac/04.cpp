#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
   while(cin>>a>>b)
   {
        c=min(a,b);
        d=max(a,b);
    
    int w=0;
    for(int i=c;i<=d;i++)
    {
        int u=0;
        int y;
        y=i;
        while(y!=1)
        {
            if(y%2==0)
            {
               y=y/2;
            }
            else
            {
               y=3*y+1;
            }
            u++;
        }
        if(w<u)
        {
            w=u;
        }
    }
    cout<<a<<" "<<b<<" "<<w+1<<endl;
   }
}
