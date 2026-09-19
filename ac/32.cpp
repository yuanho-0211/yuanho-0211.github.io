#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        if(m==0||m==1||n<m)
        {
            cout<<"Boring!"<<endl;
            continue;
        }
        vector <int>v;
        v.push_back(n);
        bool b=false;
        while(n>=m)
        {
            if(n%m!=0)
            {
                b=true;
                break;
            }
            v.push_back(n/m);
            n=n/m;
        }
        if(b)
        {
            cout<<"Boring!"<<endl;
            continue;
        }
        if(n!=1)
        {
            cout<<"Boring!"<<endl;
            continue;
        }
        else
        {
            for(int i=0;i<v.size()-1;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<v[v.size()-1]<<endl;
        }
        
    }
}

