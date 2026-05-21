#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string h;
    
    while(getline(cin,h))
    {
    for(int i=0;i<h.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
              if(h[i]==' ')
               {
                   cout<<" ";
                   break;
               }
               if(isalpha(h[i]))
               {
                   h[i]=tolower(h[i]);
               }
               
               if(h[i]==s[j])
               {
                 h[i]=s[j-2]; 
                 cout<<h[i];
                 break;
               } 
                
            
        }
    }
    cout<<endl;
    }
    
}
