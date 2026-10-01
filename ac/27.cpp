#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<cctype>
#include<iomanip>
using namespace std;


int main()
{
	int c;
	cin >> c;
	int a;

	while (c--)
	{
		vector<int>v;
		cin >> a;
		int b = a;
		while (a > 0)
		{
			int u = a % 2;
			v.push_back(u);
			a = a / 2;
		}
		int x = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == 1)
			{
				x++;
			}
		}
		int y = 0;
		while (b > 0)
		{
			int e = b % 10;
			
			while (e > 0)
			{
				y = y + e % 2;
				e = e / 2;
			}
			b = b / 10;
		}
		cout<<x<<" " << y << endl; 
	}
		
}
