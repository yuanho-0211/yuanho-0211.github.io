#include<iostream>
using namespace std;
int main()
{
	int n, s, d, a, b;
	cin >> n;
	while (n--)
	{
		cin >> s >> d;

		if (s >= d)
		{
			if ((s + d)%2==0)
			{
				a = (s + d) / 2;
				b = s - a;
				cout << a << " " << b << endl;
			}
			else
			{
				cout << "impossible" << endl;
			}
			

		}
		else
		{
			cout << "impossible" << endl;
		}
	}
}
