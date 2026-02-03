#include <iostream>
using namespace std;

int gcd(int, int);

int gcd(int a, int b)
{
	bool t = false;
	int max = 0;
	for (int k = 1; k <= a; k++)
	{
		if (a % k == 0 && b % k == 0)
		{
			if (k > max)
			{
				max = k;
			}
		}
		
	}
	return max;
}
int main()
{
	
	
	
	int n;
	while (cin >> n && n != 0)
	{
		int s = 0;
		for (int i = 1; i < n; i++)
		{
			for (int j = i+1; j <=n; j++)
			{
				s = s + gcd(i, j);
			}
		}
		cout << s << endl;
		
	}
	
	
}
