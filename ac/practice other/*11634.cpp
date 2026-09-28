#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    long long t,n;
    string s, m;
    long long b;
    while (cin >> t)
    {
        
        if (t == 0)
        {
            break;
        }
        vector <int>a;
        bool h = false;
        a.push_back(t);
       while (!h)
       {
           m = "";
           n = pow(t, 2);
           s = to_string(n);
           while(s.size()!=8)
           {
               s = "0" + s;
           }
           for (int i = 2; i < 6; i++)
           {
               m = m + s[i];
           }
           while (m.size() != 4)
           {
               m = "0" + m;
           }
           b = stoi(m);

           for (int i = 0; i < a.size(); i++)
           {
               if (b == a[i])
               {
                   h = true;
                   break;
               }
           }
           if (h)
           {
               break;
           }
           else
           {
               a.push_back(b);
               t = b;
           }
       }
       if (h)
       {
          // cout << a.size()+1 << endl;
           cout << a.size()  << endl;
           continue;
       }
    }
   
}
