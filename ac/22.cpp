#include <iostream>
#include <vector>
#include <cmath>
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
        int u=0;
        int c=ceil(sqrt(a));
        int d=floor(sqrt(b));
        for(int i=c;i<=d;i++)
        {
            u++;
        }
        cout<<u<<endl;
    }
    
}
