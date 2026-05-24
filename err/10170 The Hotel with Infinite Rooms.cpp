#include <iostream>
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        long long t=0;
        while(t<b)
        {
            t=t+a;
            a=a+1;
        }
        cout<<a-1<<endl;
    }
}
