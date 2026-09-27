#include<iostream>
#include <vector>
#include<algorithm>
#include <cmath>
#include <string>
using namespace std;
bool c(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		if (n < 4)
		{
			cout << "Goldbach's conjecture is wrong." << endl;
			continue;
		}
		bool f = false;
		for (int i = 3; i <= n; i++)
		{
			if (i % 2 == 1&&(n-i)%2==1)
			{
				if (c(i) && c(n - i))
				{
					cout << n << " = " << i << " + " << n-i << endl;
					f = true;
					break;
				}
			}
		}
		if (f)
		{
			continue;
		}
		else
		{
			cout << "Goldbach's conjecture is wrong." << endl;
		}
	}
}
