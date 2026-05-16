#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string a;
    while(cin>>a)
    {
        if(a=="0")
        {
            break;
        }
        int b=0;
        int d=0;
        int c=a.size();
 
        for(int i=0;i<c;i++)
        {
          if(i%2==0)
          {
           b=b+a[i]-48; 
          }
          else
         {
            d=d+a[i]-48; 
          }
        }
        
        if(abs(b-d)%11==0)
        {
            cout<<a<<" is a multiple of 11."<<endl;
        }
        else
        {
            cout<<a<<" is not a multiple of 11."<<endl;
        }
    }
}
