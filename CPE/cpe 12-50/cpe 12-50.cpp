#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	string h [100][100];
	string p [100][100];
	getline(cin, s);
	
		int t = 0;
		int f = 0;
		for (int i = 0; i < s.size(); i++)
		{
			f++;
			if (s[i] == '/n')
			{
				t++;
				f = 0;
			}
		}
		int r = 0;
		for (int j = 0; j <t ; j++)
		{
			for (int k = 0; k < f; k++)
			{
				h[j][k] = s[r];
				r++;
			}
		}
		for (int l = 0; l < t; l++)
		{
			for (int g = 0; g < f; g++)
			{
				p[l][g] = h[g][t - l];
				cout << p[l][g];
			}
			cout << endl;
		}
}
---------------------------------------------------
