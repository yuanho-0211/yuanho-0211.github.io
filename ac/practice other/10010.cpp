#include <iostream>
#include<vector>
#include<cctype>
using namespace std;
int main()
{
	int t, m, n,a,b;
	cin >> t;
	int x[8] = { -1,0,1,-1,1,-1,0,1 };
	int y[8] = {1,1,1,0,0,-1,-1,-1};
	int e = 0;
	while (t--)
	{
		if (e > 0)
		{
			cout << endl;
		}
		e++;
		cin >> m >> n;
		vector<string>v(m);
		for (int i = 0; i < m; i++)
		{
			cin >> v[i];
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (isupper(v[i][j]))
				{
					v[i][j] = tolower(v[i][j]);
				}
			}
		}
		int p;
		cin >> p;
		string s;
		while (p--)
		{
			cin >> s;
			for (int j = 0; j < s.size(); j++)
			{
				if (isupper(s[j]))
				{
					s[j] = tolower(s[j]);
				}
			}
			bool f=false;
			bool o=false;
			int u;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (v[i][j] != s[0])
					{
						continue;
					}
					if (v[i][j] == s[0] && s.size() == 1)
					{
						cout<<i+1<<" " << j + 1 << endl;
						o = true;
						break;

					}
					for (int k = 0; k < 8; k++)
					{
						u = 1;
						int q = 1;
						f = false;
						while(!f)
						{

							if ( i + q * y[k]<0 || i + q * y[k]>=m || j + q * x[k]<0 || j + q * x[k]>=n)
							{
								break;
							}
							if (v[i + q * y[k]][j + q * x[k]] != s[u])
							{
								break;
							}
							else
							{
								q++;
								u++;
								if (u == s.size())
								{
									a = i;
									b = j;
									f = true;
								}
							}
						}
						if (f)
						{
							break;
						}
					}
					if (f)
					{
						break;
					}
				}
				if (f||o)
				{
					break;
				}
			}
			if (o)
			{
				continue;
			}
			cout << a+1 << " " << b+1 << endl;
		}


	}
}
