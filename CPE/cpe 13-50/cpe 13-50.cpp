#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int k = 0;
	while (getline(cin, s))
	{
		
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '"')
			{
				k++;
				if (k % 2 == 0)
				{
					cout << "''";
				}
				else
				{
					cout<< "``";
				}
			}
			else
			{
				cout << s[i];
			}
		}
		cout << endl;
	}
}
