#include<iostream>
#include<string>
using namespace std;
int main()
{
	string d= "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	string s;
	int m;
	string v;
	
	//v.push_back(...)
	while (getline(cin, s))
	{
		char c;
		m = 0;
		v.resize(s.size());
		for (int i = 0; i < s.size(); i++)
		{
			c = s[i];
			bool t = false;
			
			if (c == '`' || c == '1' || c == 'q' || c == 'w' || c == 'a' || c == 's' || c == 'z' || c == 'x')
			{
				 t = true;
			}
			if (c ==' ')
			{
				v[m] = ' ';
				t = true;
				m++;
			}
			if (!t)
			{
				c = tolower(c);
				for (int k = 2; k < d.size(); k++)
				{
					if (c == d[k])
					{
						v[m] = d[k - 2];
						m++;
						break;
					}
				}
			}
		}
		for (int j = 0; j < m; j++)
		{
			cout << v[j];
		}
		cout << endl;
	}
	return 0;
}
