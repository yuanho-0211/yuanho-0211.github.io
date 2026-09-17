#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    string s;
    bool w=false;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    while(n--)
    {
        vector <string> v;
        int a=0;
        while(getline(cin,s))
        {
            if(s=="")
            {
                break;
            }
            v.push_back(s);
            a++;
        }
        if(w)
        {
            cout<<endl;
        }
        w=true;
        sort(v.begin(),v.end());
        double b;
        for(int i=0;i<v.size();i++)
        {
            b=1;
           if(i+1<v.size()) 
           {
               while(v[i+1]==v[i])
               {
                   b++;
                   i++;
               }
           }
            cout<<fixed<<setprecision(4)<<v[i]<<" "<<double(b*100/a)<<endl;
           
        }
    }
}
