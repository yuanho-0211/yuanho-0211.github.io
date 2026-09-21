#include<iostream>
using namespace std;
int main()
{
    int t,a,b,e=0;
    cin>>t;
    while(t--)
    {
        int u=0;
        e++;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(i%2==1)
            {
                u=u+i;
            }
        }
        cout<<"Case "<<e<<": "<<u<<endl;
    }
}