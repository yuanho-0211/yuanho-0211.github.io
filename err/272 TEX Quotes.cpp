#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int k=1;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='"')
            {
                if(k%2==1)
                {
                    cout<<"``";
                }
                if(k%2==0)
                {
                    cout<<"''";
                }
                k++;
                continue;
            }
            cout<<s[i];
        }
        cout<<endl;
    }
}
