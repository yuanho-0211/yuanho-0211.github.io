#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
   double t,n,p,m;
   cin>>t;
   while(t--)
   {
       cin>>n>>p>>m;
       if(p==0)
       {
           cout<<"0.0000"<<endl;
           continue;
       }
       cout<<fixed<<setprecision(4)<<pow((1-p),m-1)*p/(1-pow((1-p),n))<<endl;
       
   }
}
