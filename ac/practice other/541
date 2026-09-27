#include<iostream>
#include <vector>
#include<algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		if(n==0)
		{
			break;
		}
		vector <int>r(n, 0);
		vector <int>c(n, 0);
		vector<vector<int>>v(n, vector<int>(n));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> v[i][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (v[i][j] == 1)
				{
					r[i]++;
					c[j]++;
				}
			}
		}
		bool w = false;
		vector<int>p;
		vector<int>q;
		for (int i = 0; i < n; i++)
		{
			if (r[i] % 2 == 1)
			{
				w = true;
				p.push_back(i);
			}
			if (c[i] % 2 == 1)
			{
				w = true;
				q.push_back(i);
			}
		}
		if (!w)
		{
			cout << "OK" << endl;
			continue;
		}
		if (p.size() > 1 || q.size() > 1)
		{
			cout << "Corrupt" << endl;
			continue;
		}
		else if (p.size() == 1 && q.size() == 1)
		{
			if (r[p[0]] % 2 == 1 && c[q[0]] % 2 == 1)
			{
				cout << "Change bit (" << p[0]+1<<","<<q[0]+1<<")" << endl;
				continue;
			}
			else
			{
				cout << "Corrupt" << endl;
				continue;
			}
		}
		else
		{
			cout << "Corrupt" << endl;
		}
		



	}
}
