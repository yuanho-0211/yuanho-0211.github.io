#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	int n;
	while (cin >> n)
	{
		
		int b = 0;
		vector <int> v;
		int d = n;
		while (d--)
		{
			int o;
			cin >> o;
			v.push_back(o);
		
		}
		int e = 0;
		int c = 0;
		int a = 0;
		sort(v.begin(), v.end());
		if (n % 2 == 0)
		{
			b = (n) / 2-1;
			e = v[b + 1] - v[b]+1;
			for (int j = 0; j <n; j++)
			{
				if (v[j] <= v[(n) / 2] && v[j]>= v[(n) / 2 - 1])
				{
					c++;
				}
				
			}

		}
		if (n % 2 == 1)
		{
			b = n / 2;
			e = 1;
			while (a < n)
			{
				if (v[a] == v[b])
				{
					c++;
				}
				a++;
			}
		}
		
		
		cout << v[b] << " " << c << " " << e << endl;
	}
}
