#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int o=0;
    string c,g;
    string s[2001];
    int v[2001]={0};
    cin>>n;
    while(n--)
    {
        bool p=false;
        cin>>c;
        getline(cin,g);
        for(int i=0;i<=o;i++)
        {
           if(s[i]==c)
           {
               p=true;
               v[i]++;
               break;
           }
        }
        if(!p)
        {
            o++;
            s[o]=c;
            v[o]++;
        }
    }
    for(int j=1;j<=o;j++)
    {
        for(int k=j+1;k<=o;k++)
        {
            if(s[j]>s[k])
            {
                swap(s[j],s[k]);
                swap(v[j],v[k]);
            }
        }
    }
    for(int e=1;e<=o;e++)
    {
        cout<<s[e]<<" "<<v[e]<<endl;
    }
    
}
