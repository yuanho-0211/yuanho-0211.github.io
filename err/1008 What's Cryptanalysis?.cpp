#include <iostream>
#include <string>
#include<cctype>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int a[26]={0};
    int b[26]={0};
    string s;
    cin>>n;
    cin.ignore();
    while(n--)
    {
       getline(cin,s);
       for(int i=0;i<s.size();i++)
       {
           if(isalpha(s[i]))
           {
               s[i]=toupper(s[i]);
               int d=s[i]-'A';
               a[d]++;
           }
       }
    }
    for(int k=0;k<26;k++)
    {
        b[k]=k;
    }
    for(int o=0;o<26;o++)
    {
        for(int e=o+1;e<26;e++)
        {
            if(a[o]<a[e])
            {
                swap(a[e],a[o]);
                swap(b[e],b[o]);
                
            }
            else if((a[o]==a[e])&&b[o]>b[e])
            {
                swap(a[e],a[o]);
                swap(b[e],b[o]);
                
            }
           
        }
    }
    for(int j=0;j<26;j++)
    {
        if(a[j]>0)
        {
         cout<<char(b[j]+'A')<<" "<<a[j]<<endl;   
        }
    }
}
