#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long a;
    int u=0;
    while(cin>>a)
    {
        u++;
        cout<<setw(4)<<u<<".";
        long long b=a/10000000;
        if(a==0)
        {
            cout<<" 0"<<endl;
            continue;
        }
        if(b>0)
        {
            
            if(b/10000000>0)
            {
                cout<<" "<<b/10000000<<" kuti";
                b=b%10000000;
            }
            if(b/100000>0)
            {
                cout<<" "<<b/100000<<" lakh";
                b=b%100000;
            }
            if(b/1000>0)
            {
                cout<<" "<<b/1000<<" hajar";
                b=b%1000;
            }
            if(b/100>0)
            {
                cout<<" "<<b/100<<" shata";
                b=b%100;
            }
            if(b==0)
            {
                cout<<" kuti";
            }
            else
            {
                cout<<" "<<b<<" kuti";
            }
            
            
            a=a%10000000;
        }
        
        if(a/100000>0)
        {
            cout<<" "<<a/100000<<" lakh";               
            a=a%100000;
        }
            
        if(a/1000>0)
        {
              cout<<" "<<a/1000<<" hajar";
              a=a%1000;
         }
        if(a/100>0)
        {
               cout<<" "<<a/100<<" shata";
               a=a%100;
        }
        if(a>0)
        {
               cout<<" "<<a;
        }
         cout<<endl;
        
    }
}
