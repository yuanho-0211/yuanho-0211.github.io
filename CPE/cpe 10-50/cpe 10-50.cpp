#include<iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	string a;
	while (cin >> s)
	{
		if (s == "0")
		{
			break;
		}
		bool d = false;
		while (!d)
		{
			int h = 0;
			for (int i = 0; i < s.size(); i++)
			{
				h = h + s[i] - '0';
			}
			a = to_string(h);
			if (a.size() < 2)
			{
				d = true;
			}
			s = a;
		}
		cout << a << endl;
	}
}
