#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int c[26]={0};
        int d [26]={0};
        for(int i=0;i<a.size();i++)
        {
           c[(a[i])-'a']++; 
        }
        for(int j=0;j<b.size();j++)
        {
            d[(b[j])-'a']++;
        }
        for(int k=0;k<26;k++)
        {
            int e=min(c[k],d[k]);
            for(int o=0;o<e;o++)
            {
                cout<<char(k+'a');
            }
        }
        cout<<endl;
    }
}
