#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	string s;
	string o;
	int p;
	while (getline(cin,s))
	{
		int k = 1;
	     p = 0;
		 bool t = false;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != ' ')
			{
				o[p] = s[i];
				p++;
			}
		}
		while (k < o.size())
		{
			for (int i = 0; i <p; i++)
			{
				if (o[i] == 'k' )
				{
					t = true;
					k++;
					continue;
				}
			}
			if (!t)
			{
				break;
			}
		}
		
		if (t)
		{
			cout << "Jolly";
		}
		else
		{
			cout << "Not jolly";
		}
	}
}
