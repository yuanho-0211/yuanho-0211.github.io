#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int m;
	while(cin>>n)
	{
		vector <int>v(n);
	
		for(int i=0;i< n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		m=n/2;
		int u=0,p=0;
		if(n%2==0)
		{
			cout<<v[m-1]<<" ";
			for(int i=0;i<v.size() ;i++)
			{
				if(v[m-1]<=v[i]&&v[i]<=v[m])
				{
					u++;
				}
			}
			p=v[m]-v[m-1]+1;
			
		}
		else
		{
			cout<<v[m]<<" ";
			for(int i=0;i<v.size() ;i++)
			{
				if(v[i]==v[m])
				{
					u++;
				}
			}
			p=1;
		}
		cout<<u<<" "<<p<<endl;
	}
}