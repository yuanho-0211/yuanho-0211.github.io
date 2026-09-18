#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	bool o=false;
	while(getline(cin,s))
	{
		int a[128]={0};
		int b[128];
		int c[128];
		if(o)
		{
			cout<<endl;
		}
		o=true;
		for(int i=0;i< s.size();i++)
		{
			a[int(s[i])]++;
		}
		int u=0;
		for(int i=0;i<128 ;i++)
		{
			if(a[i]>0)
			{
				b[u]=a[i];
				c[u]=i;
				u++;
			}
		}
		for(int i=0;i<u-1 ;i++)
		{
			for(int j=0;j<u-i-1 ;j++)
			{
				if(b[j]>b[j+1])
				{ 
					swap(b[j],b[j+1]);
					swap(c[j],c[j+1]);
				}
				else if(b[j]==b[j+1]&&c[j]<c[j+1])
				{
					swap(b[j],b[j+1]);
					swap(c[j],c[j+1]);
				}
			}
		}
		for(int i=0;i<u ;i++)
		{
			cout<<c[i]<<" "<<b[i]<<endl;
		}
	}
}