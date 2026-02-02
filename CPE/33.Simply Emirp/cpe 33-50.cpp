#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	
	while (cin >> n)
	{
		bool a = false;
		bool b = false;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				a = true;
				break;
			}
		}
		if (!a)
		{
			int m = n;
			int k = 0;
			while(m > 0)
			{
				k = k * 10 + m % 10;
				m = m / 10;
			}
			if (k == n)
			{
				b = true;
			}
			else
			{
				for (int i = 2; i <= sqrt(k); i++)
				{
					if (k % i == 0)
					{
						b = true;
						break;
					}
				}
			}
		}
		if (a)
		{
			cout << n << " is not prime." << endl;
		}
		if (!a)
		{
			if (b)
			{
				cout << n << " is prime." << endl;
			}
			if (!b)

			{
				cout << n << " is emirp." << endl;
			}
		}
		
	}
}
