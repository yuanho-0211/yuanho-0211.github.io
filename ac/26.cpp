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
   long long n,m;
	while (cin >> n)
	{
		vector<long long>v;
		v.push_back(1);
		v.push_back(2);
		long long g = v[1];
		while (g < 100000000)
		{
			v.push_back(v[v.size() - 1] + v[v.size() - 2]);
			g = v[v.size() - 1];
		}
		while (n--)
		{
			
			cin >> m;
			long long f = m;
			int u;
			for (int i = v.size() - 1; i >= 0; i--)
			{
				if (m >= v[i])
				{
					u = i ;
					break;
				}
			}
			string str;
			for (int i = u; i >= 0; i--)
			{
				if (m >= v[i])
				{
					str = str + "1";
					m = m - v[i];
				}
				else
				{
					str = str + "0";
				}

			}
			cout << f << " = " << str << " (fib)" << endl;
		}
	}
}
