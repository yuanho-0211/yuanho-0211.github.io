#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int m,n;
#比較寫法
bool cm(int a,int b)
{
    int c=a%n;
    int d=b%n;
    if(c!=d)
    {
        return c<d;
    }
    if((a%2==0)&&(b%2!=0))
    {
        return false;
    }
    if((a%2!=0)&&(b%2==0))
    {
        return true;
    }
    if((a%2!=0)&&(b%2!=0))
    {
        return a>b;
    }
    if((a%2==0)&&(b%2==0))
    {
        return a<b;
    }
}
int main()
{
    while(cin>>m>>n)
    {
     if(n==0&&m==0)
     {
         break;
     }
     #() []
     vector <int> arr(m);
    #用for沒用while
     for(int i=0;i<m;i++)
     {
         cin>>arr[i];
     }
     sort(arr.begin(),arr.end(),cm);
     cout<<m<<" "<<n<<endl;
     for(int j=0;j<m;j++)
     {
         cout<<arr[j]<<endl;
     }
    }
    cout<<"0 0";
}
