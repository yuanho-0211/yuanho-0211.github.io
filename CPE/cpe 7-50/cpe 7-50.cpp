#include<iostream>
#include<string>
using namespace std;

int main()
{
	string country;
	int n = 0;
	string c[100];
	int a[100];
	int t;
	cin >> t;
	for (int j = 0 ; j < t; j++)
	{
	   while (cin >> country)
		{
			for (int i = 0; i < n; i++)
			{
				if (country != c[i])
				{
					c[n] = country;
					a[n] = 1;
				}
				else
				{
					a[n] = a[n] + 1;
				}
			}

		}

	}
		
}
