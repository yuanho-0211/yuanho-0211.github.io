#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector <int> v(n);
        vector <int> w(n);
        bool b=false;
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
       if(n==1)
        {
            cout<<"Jolly"<<endl;
            continue;
        }
       for(int i=0;i<n;i++)
       {
           if(i+1<n)
           {
               int u=abs(v[i]-v[i+1]);
               if(u<1||u>n-1)
               {
                   b=true;
                   break;
               }
               w[u]++;
           }
       }
       if(b)
       {
           cout<<"Not jolly"<<endl;
           continue;
       }
      
       for(int i=1;i<n;i++)
       {
           if(w[i]==0||w[i]>1)
           {
               b=true;
               break;
           }
       }
       if(b)
       {
           cout<<"Not jolly"<<endl;
       }
       else
       {
           cout<<"Jolly"<<endl;
       }
    
    }
}
