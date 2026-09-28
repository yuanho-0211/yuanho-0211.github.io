#include<iostream>
#include <vector>
#include<algorithm>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string s;
	int u = 0;
	while (cin >> s)
	{
		if (s == "#")
		{
			break;
		}
		u++;
		cout << "Case " << u << ": ";
		if (s == "HELLO")
		{
			cout << "ENGLISH" << endl;
		}
		else if (s == "HOLA")
		{
			cout << "SPANISH" << endl;
		}
		else if (s == "HALLO")
		{
			cout << "GERMAN" << endl;
		}
		else if (s == "BONJOUR")
		{
			cout << "FRENCH" << endl;

		}
		else if (s == "CIAO")
		{
			cout << "ITALIAN" << endl;

		}
		else if (s == "ZDRAVSTVUJTE")
		{
			cout << "RUSSIAN" << endl;

		}
		else 
		{
			cout << "UNKNOWN" << endl;

		}
	}
}
