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
	int n;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		vector<int>v;
		while (n > 0)
		{
			int u = n % 2;
			v.push_back(u);
			n = n / 2;
		}
		int r = 0;
		for (int i = v.size() - 1; i >= 0; i--)
		{
			if (v[i] == 1)
			{
				r++;
			}
		}
		cout << "The parity of ";
		for (int i = v.size()-1; i >=0; i--)
		{
			if (v[v.size() - 1] == 0)
			{
				continue;
			}
			cout << v[i];
		}
		cout <<  " is " << r << " (mod 2)." << endl;
	}
}
