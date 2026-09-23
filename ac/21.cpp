#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    int h,m;
    string s;
    int u=0;
    while(n--)
    {
        u++;
         for(int i=0;i<2;i++)
         {
             cin>>s;
         }
        cin>>m;
        h=m;
        vector<vector<long long>> v(h,vector<long long>(h));
        bool b=false;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<h;j++)
           {
              cin>>v[i][j];
              if(v[i][j]<0)
              {
                  b=true;
              }
           }
        }
        if(b)
        {
            cout<<"Test #"<<u<<": Non-symmetric."<<endl;
            continue;
        }
        double x=(h-1)/2;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<h;j++)
           {
                
                if(v[i][j]!=v[h-1-i][h-1-j])
                {
                   b=true;
                   break;
                }
           }
           if(b)
           {
               break;
           }
        }
        if(b)
        {
            cout<<"Test #"<<u<<": Non-symmetric."<<endl;
        }
        else
        {
             cout<<"Test #"<<u<<": Symmetric."<<endl;
        }
        
        
    }
}
