#include<iostream>
#include<cmath>
#include<iomanip>
#include<vector>
#include<string>
using namespace std;
int main()
{
   string s;
   int t;
   cin>>t;
   cin.ignore();
   string a={"cdefgabCDEFGAB"};
   vector <string>d=
   {
    "0111001111", // c: 2~4, 7~10
    "0111001110", // d: 2~4, 7~9
    "0111001100", // e: 2~4, 7~8
    "0111001000", // f: 2~4, 7
    "0111000000", // g: 2~4
    "0110000000", // a: 2~3
    "0100000000", // b: 2
    "0010000000", // C: 3
    "1111001110", // D: 1~4, 7~9
    "1111001100", // E: 1~4, 7~8
    "1111001000", // F: 1~4, 7
    "1111000000", // G: 1~4
    "1110000000", // A: 1~3
    "1100000000" 
    };            // B: 1~2
   while(t--)
   {
       int b[14][10]={0};
       bool c[10]={false}; 
       getline(cin,s);
       int p=0;
       for(int i=0;i<s.size();i++)
       {
           int u=a.find(s[i]);
           
         if(p==0)
         {
             for(int j=0;j<d[u].size();j++)
            {
                if(d[u][j]=='1')
                {
                    b[u][j]++;
                    c[j]=true;
                }
            }
         }
         else
         {
             for(int j=0;j<d[u].size();j++)
            {
                if(d[u][j]=='1')
                 {
                    if(!c[j])
                    {
                        b[u][j]++;
                       c[j]=true;
                    }
                }
                else
                {
                    c[j]=false;
                }
            } 
         }
          p++;
       } 
       
       for(int i=0;i<10;i++)
        {
            int y=0;
            for(int j=0;j<14;j++)
            {
                y=y+b[j][i];
            }
            cout<<y;
            if(i<9)
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
   }
}
