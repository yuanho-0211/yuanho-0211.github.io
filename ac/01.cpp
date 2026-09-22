#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
   int n,m;
   cin>>n;
   while(n--)
   {
       cin>>m;
       vector <int> v(m);
       for(int i=0;i<m;i++)
       {
           cin>>v[i];
       }
       sort(v.begin(),v.end());
       int u=m/2;
       int w=0;
       for(int i=0;i<m;i++)
       {
           w=w+abs(v[i]-v[u]);
       }
       cout<<w<<endl;
   }
}
