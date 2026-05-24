#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[3000];
    while(cin>>n)
    {
        bool t=false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int k=1;k<n;k++)
        {
            for(int j=1;j<n;j++)
            {
               if(abs(a[j]-a[j-1])==k)
               {
                   break;
               }
               if(j==n-1)
               {
                   t=true;
                   break;
               }
            }
            if(t)
            {
                break;
            }
        }
        if(t)
        {
            cout<<"Not jolly"<<endl;
        }
         if(!t)
        {
            cout<<"Jolly"<<endl;
        }
        
    }
}
