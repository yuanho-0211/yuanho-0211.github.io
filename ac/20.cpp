#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a<b||a<0||b<0)
        {
           cout<<"impossible"<<endl;
           continue;
        }
        int c=(a+b)/2;
        int d=a-c;
        if(c<0||d<0||(a+b)%2!=0)
        {
            cout<<"impossible"<<endl;
            continue;
        }
        cout<<max(c,d)<<" "<<min(c,d)<<endl;
    }
    
}
