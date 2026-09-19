#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        string p=s;
        if(s=="0")
        {
            break;
        }
        int y=0;
        while(s.size()>1)
        {
            long long f=0;
            for(int i=0;i<s.size();i++)
            {
                f=f+(s[i]-'0');
            } 
            s=to_string(f);
            if(s.size()>1)
            {
                y++;
            }
        }
        if(s[0]=='9')
        {
            cout<<p<<" is a multiple of 9 and has 9-degree "<<y+1<<"."<<endl;
            continue;
        }
        else
        {
            cout<<p<<" is not a multiple of 9."<<endl;
        }                                                            
    }
}

