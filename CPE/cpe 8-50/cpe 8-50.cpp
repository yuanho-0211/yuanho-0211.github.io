#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++)
	{
		getline(cin,s);
		for (int i = 0; i < s.size(); i++)
		{
			string u ;
			u = toupper(s[i]);
		}
	}
}
----------------------------------------
