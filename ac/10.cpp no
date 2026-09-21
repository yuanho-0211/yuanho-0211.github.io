#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string n;
    while(cin>>n)
    {
        if(n=="0")
        {
            break;
        }
        while(n.size()>1)
        {
            long long u=0;
            for(int i=0;i<n.size();i++)
            {
                u=u+(n[i]-'0');
            }
            n=to_string(u);
        }
        cout<<n<<endl;
    }
}
