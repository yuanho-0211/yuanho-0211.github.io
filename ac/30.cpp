#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t,n,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        vector <int> v(p);
        int u=0;
        for(int i=0;i<p;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<p;j++)
           {
                if((i-6)%7==0||(i-7)%7==0)
                {
                    break;
                }
                if(i%v[j]==0)
                {
                    u++;
                    break;
                }
           }
        }
        cout<<u<<endl;
    }
}
