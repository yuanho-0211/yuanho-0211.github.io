#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
   int t;
   cin>>t;
   long long a,b,c,d;
   int u=0;
   while(t--)
   {
       cin>>a>>b>>c>>d;
       u++;
       long long x=(a+b)*(a+b+1)/2+a;
       long long y=(c+d)*(c+d+1)/2+c;
       cout<<"Case "<<u<<": "<<abs(x-y)<<endl;
   }
}
