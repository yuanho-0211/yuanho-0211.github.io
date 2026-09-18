#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int u;
	while(n--)
	{
		cin>>m;
		vector<int>v(m);
		for(int i=0;i<m ;i++)
		{
			cin>>v[i];
		}
		u=0;
		for(int i=0;i<m-1 ;i++)
		{
			for(int j=0;j<m-i-1 ;j++)
			{
				if(v[j]>v[j+1])
				{
					swap(v[j],v[j+1]);
					u++;
				}
				
			}
		}
		cout<<"Optimal train swapping takes "<<u<<" swaps."<<endl;
	}
}