#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   string s;
   string a={"`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"};
   while(getline(cin,s))
   {
       for(int i=0;i<s.size();i++)
      {
          if(s[i]!=' ')
          {
              int u=a.find(s[i]);
              cout<<a[u-2];
          }
          else
          {
              cout<<" ";
          }
      }
      cout<<endl;
   }
   
}
