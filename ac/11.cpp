#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string c,d;
    while(getline(cin,c)&&getline(cin,d))
    {
        int a[26]={0};
        int b[26]={0};
        for(int i=0;i<c.size();i++)
        {
            a[c[i]-'a']++;
        }
        for(int i=0;i<d.size();i++)
        {
            b[d[i]-'a']++;
        }
        int u;
        for(int i=0;i<26;i++)
        {
            u=min(a[i],b[i]);
            if(u==0)
            {
                continue;
            }
            for(int j=0;j<u;j++)
            {
                cout<<char(i+'a');
            }
        }
        cout<<endl;
    }
}
