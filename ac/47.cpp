#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int m,n,a,b,g,q,u;
    char c;
    string s;
    string p={"ESWN"};
    int x[4]={1,0,-1,0};
    int y[4]={0,-1,0,1};
    cin>>m>>n;
    vector <vector<bool>> r(m+1,vector<bool>(n+1,false));
    while(cin>>a>>b>>c>>s)
    {
        bool l=false;
        g=a;
        q=b;
        for(int i=0;i<s.size();i++)
        {
            u=p.find(c);
            if(s[i]=='R')
            {
               u=(u+4+1)%4;
               c=p[u];
            }
            else if(s[i]=='L')
            {
                u=(u+4-1)%4;
                c=p[u];
            }
            else if(s[i]=='F')
            {
                g=g+x[u];
                q=q+y[u];
                if(g<0||q<0||g>m||q>n)
                {
                    if(r[g-x[u]][q-y[u]])
                    {
                        g=g-x[u];
                        q=q-y[u];
                        continue;
                    }
                    else
                    {
                        r[g-x[u]][q-y[u]]=true;
                        cout<<g-x[u]<<" "<<q-y[u]<<" "<<p[u]<<" LOST"<<endl;
                        l=true;
                        break;
                    }
                }
            }
        }
        if(!l)
        {
            cout<<g<<" "<<q<<" "<<p[u]<<endl;
        }
    }
}
