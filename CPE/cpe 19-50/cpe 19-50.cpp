#include <iostream>
using namespace std;
int main()
{
	int t, a, b;
	cin >> t;
	int n = 1;
	while (t--)
	{
		cin >> a >> b;
		int m = 0;
		for (int i = a; i <= b; i++)
		{
			if (i % 2 == 1)
			{
				m += i;
			}
		}
		cout << "Case " << n << ": " << m << endl;
		n++;
	}
}
