#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        bool b=false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                b=true;
                break;
            }
        }
        if(b)
        {
            cout<<n<<" is not prime."<<endl;
            continue;
        }
        string s=to_string(n);
        string str;
        for(int i=s.size()-1;i>=0;i--)
        {
            str=str+s[i];
        }
        int r=stoi(str);
        if(r==n)
        {
            cout<<n<<" is prime."<<endl;
            continue;
        }
        bool h=false;
        for(int i=2;i<=sqrt(r);i++)
        {
            if(r%i==0)
            {
                h=true;
                break;
            }
        }
        if(!h)
        {
            cout<<n<<" is emirp."<<endl;
        }
        else
        {
            cout<<n<<" is prime."<<endl;
        }
        
    }
}

