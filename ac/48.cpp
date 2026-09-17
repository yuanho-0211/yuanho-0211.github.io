#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a=0,b=n;
        while(n>=3)
        {
            a=n%3;//每輪剩下空瓶
            b=b+n/3;//喝的總數
            n=n/3+a;//每輪剩下總空瓶
        }
        if(n==2)
        {
            b++;
        }
        cout<<b<<endl;
    }
}
