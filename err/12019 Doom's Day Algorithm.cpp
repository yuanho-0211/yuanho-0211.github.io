#include <iostream>
using namespace std;
int main()
{
    int n;
    int m,d;
    cin>>n;
    while(n--)
    {
        cin>>m>>d;
        int p,t;
        switch(m)
        {
            case 1:
            {
                p=10;
                break;
            }
            case 2:
            {
                p=21;
                break;
            }
            case 3:
            {
                p=7;
                break;
            }
            case 4:
            {
                p=4;
                break;
            }
            case 5:
            {
                p=9;
                break;
            }
            case 6:
            {
                p=6;
                break;
            }
            case 7:
            {
                p=11;
                break;
            }
            case 8:
            {
                p=8;
                break;
            }
            case 9:
            {
                p=5;
                break;
            }
            case 10:
            {
                p=10;
                break;
            }
            case 11:
            {
                p=7;
                break;
            }
            case 12:
            {
                p=12;
                break;
            }
        }
        if((d-p)<0)
        {
            t=(d-p)%7;
        }
        if((d-p)>0)
        {
            t=(d-p)%7;
        }
        if((d-p)==0)
        {
            t=0;
        }
        t=(1+(t+7)%7)%7;
         switch(t)
        {
            case 1:
            {
                cout<<"Monday"<<endl;
                break;
            }
            case 2:
            {
               cout<<"Tuesday"<<endl;
                break;
            }
            case 3:
            {
                cout<<"Wednesday"<<endl;
                break;
            }
            case 4:
            {
                cout<<"Thursday"<<endl;
                break;
            }
            case 5:
            {
                cout<<"Friday"<<endl;
                break;
            }
            case 6:
            {
                cout<<"Saturday"<<endl;
                break;
            }
            case 0:
            {
                cout<<"Sunday"<<endl;
                break;
            }
        }
    }
}
