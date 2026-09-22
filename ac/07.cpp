#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin>>a;
    string x,y;
    vector <string>n;
    vector <int>m;
    int u=0;
    while(a--)
    {
         cin>>x;
         cin.ignore();
         getline(cin,y);
         bool h=false;
         int p;
         for(int i=0;i<u;i++)
         {
           if(n[i]==x)
           {
               h=true;
               p=i;
               break;
           }
         }
         if(!h)
         {
             n.push_back(x);
             //m[u]++;
             m.push_back(1);
             u++;
         }
         else
         {
             m[p]++;
            
         }
    }
     for(int i=0;i<u-1;i++)
    {
        for(int j=0;j<u-i-1;j++)
       {
          if(n[j]>n[j+1])
          {
              swap(n[j],n[j+1]);
              swap(m[j],m[j+1]);
          }
       }
    }
    for(int i=0;i<u;i++)
    {
        cout<<n[i]<<" "<<m[i]<<endl;
    }
    
         
}
