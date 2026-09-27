#include<iostream>
#include <vector>
#include<algorithm>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string s,str;
	int a, b;
	while (getline(cin, s))
	{
		a = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				b = i-1 ;
				for (int j = b; j >=a; j--)
				{
					cout << s[j];
				}
				cout << " ";
				a = b+2;
			}
			else if (i == s.size() - 1)
			{
				for (int j = s.size() - 1; j >= a; j--)
				{
					cout << s[j];
				}
			}

		}
		cout << endl;
	}
}
