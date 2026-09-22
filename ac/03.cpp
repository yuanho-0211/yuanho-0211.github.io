#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
        {
            break;
        }
        int u=0,t=0;
        while(a>0||b>0)
        {
            if(a%10+b%10+u>9)
            {
                u=1;
                t++;
            }
            else
            {
                u=0;
            }
            a=a/10;
            b=b/10;
        }
        if(t==0)
        {
            cout<<"No carry operation."<<endl;
        }
        else if(t==1)
        {
             cout<<t<<" carry operation."<<endl;
        }
        else
        {
            cout<<t<<" carry operations."<<endl;
        }
    }
}
