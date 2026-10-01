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
	string n;
	while (cin >> n)
	{
		int u = 0, t = 0;
		int m = 0;
		for (int i = 0; i < n.size(); i++)
		{
			if ('0' <= n[i] && n[i] <= '9')
			{
				u = n[i] - '0';
			}
			else if ('A' <= n[i] && n[i] <= 'Z')
			{
				u = n[i] - 'A'+10;
			}
			else if ('a' <= n[i] && n[i] <= 'z')
			{
				u = n[i] - 'a'+36;
			}
			t = t + u;
			if (u > m)
			{
				m = u;
			}
		}
		bool g = false;
		int e;
		for (int i = 2; i < 63; i++)
		{
			if (m >= i)
			{
				continue;
			}
			if (t % (i-1) == 0)
			{
				g = true;
				e = i;
				break;
			}
		}
		if (g)
		{
			cout << e << endl;
		}
		else
		{
			cout << "such number is impossible!" << endl;
		}
		
	}
}
