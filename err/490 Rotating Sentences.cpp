#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    char a[100][100];
    int p=0;
    int m=0;
    for(int y=0;y<100;y++)
    {
        for(int u=0;u<100;u++)
        {
            a[y][u]=' ';
        }
    }
    while(getline(cin,s))
    {
        
        
        for(int i=0;i<s.size();i++)
        {
                a[p][i]=s[i];
                
        }
        p++;
        if(s.size()>m)
        {
            m=s.size();
        }
        
    }
        for(int k=0;k<m;k++)
       {
             for(int j=0;j<p;j++)
            {
                cout<<a[p-j-1][k];
            }
            cout<<endl;
       }
    
}
