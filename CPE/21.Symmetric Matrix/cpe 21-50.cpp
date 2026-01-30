#include <iostream>
using namespace std;
int main()
{
	int t, n;
	char s1,s2;
	long long a[100][100];
	cin >> t;
	int b = 1;
	while (t--)
	{
			
		cin >> s1 >> s2>> n;
		bool k = false;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
				if (a[i][j] < 0)
				{
					k = true;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (k)
			{
				break;
			}
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] != a[n - 1 - i][n - 1 - j])
				{
					k = true;
					break;
				}
			}
		}
		if (! k)
		{
			cout << "Test #" << b << ":" << " Symmetric." << endl;
		}
		else
		{
			cout << "Test #" << b << ":" << " Non-symmetric." << endl;
		}
		b++;
	}
}
