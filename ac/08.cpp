#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    int a; 
    string s;
    cin>>a;
    cin.ignore();
    int b[26]={0};
    int c[26];
    while(a--)
    {
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                s[i]=toupper(s[i]);
                b[s[i]-'A']++;
            }
        }
    }
    for(int i=0;i<26;i++)
    {
        c[i]=i;
    }
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<25-i;j++)
        {
           if(b[j]<b[j+1]||(b[j]==b[j+1]&&c[j]>c[j+1]))
           {      
               swap(b[j],b[j+1]);
               swap(c[j],c[j+1]);
            }
         }
    }
    for(int i=0;i<26;i++)
    {
        if(b[i]==0)
        {
            break;   
        }
        cout<<char(c[i]+'A')<<" "<<b[i]<<endl;
    }
    
}
