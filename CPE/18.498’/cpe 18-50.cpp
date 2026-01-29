#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <limits>

using namespace std;
int main()
{
	int x;
	string s;


	while (cin >> x)
	{
		cin.ignore();

		getline(cin, s);
		stringstream ss(s);
		int t;
		int n = 0;
		vector <int> v;
		while (ss >> t)
		{
			v.push_back(t);
			n++;
		}
		n -= 1;
		int a = 0;
		int pow = 1;
		for (int i = n - 1; i >= 0; i--)
		{
			a += v[i] * (n - i) * pow;
			pow *= x;

		}
		cout << a << endl;
	}
}
