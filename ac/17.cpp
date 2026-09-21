#include<iostream>
using namespace std;
int main()
{
    long long s,d;
    while(cin>>s>>d)
    {
        long long g=0;
        while(g<d)
        {
            g=g+s;
            s++;
        }
        cout<<s-1<<endl;
    }
}