#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector <string> v;
    string s;
    while(getline(cin,s))
    {
        v.push_back(s);
    }
    int a=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].size()>a)
        {
            a=v[i].size();
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=v.size()-1;j>=0;j--)
        {
            if(i>v[j].size()-1)
            {
                cout<<" ";
                continue;
            }
            cout<<v[j][i];
        }
        cout<<endl;
    }
}
