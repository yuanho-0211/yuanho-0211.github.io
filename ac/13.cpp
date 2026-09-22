#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int u=0;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='"')
            {
                if(u%2==0)
                {
                    cout<<"``";
                    u++;
                }
                else
                {
                    cout<<"''";
                    u++;
                }
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}
