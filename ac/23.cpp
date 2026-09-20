#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    int e=0;
    while(cin>>n)
    {
        e++;
        vector <int> v(n);
        vector <int> w;
        bool b=false;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(v[0]<1)
        {
             cout<<"Case #"<<e<<": It is not a B2-Sequence."<<endl<<endl;;
             continue;
        }
        for(int i=0;i<n;i++)
        {
            if(i+1<n)
            {
                if(v[i]>=v[i+1])
                {
                    b=true;
                    break;
                }
            }
        }
        if(b)
        {
             cout<<"Case #"<<e<<": It is not a B2-Sequence."<<endl<<endl;;
             continue;
        }
        int y=0;
        bool q=false;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int r=v[i]+v[j];
                for(int k=0;k<y;k++)
               {
                    if(w[k]==r)
                    {
                        q=true;
                        break;
                    }
               }
               if(q)
               {
                   break;
               }
               else
               {
                    w.push_back(r);
                    y++;
               }
            }
            if(q)
           {
              break;
           }
        }
        if(q)
        {
          cout<<"Case #"<<e<<": It is not a B2-Sequence."<<endl;
        }
        else
        {
             cout<<"Case #"<<e<<": It is a B2-Sequence."<<endl;
        }
        cout<<endl;
    }
}
