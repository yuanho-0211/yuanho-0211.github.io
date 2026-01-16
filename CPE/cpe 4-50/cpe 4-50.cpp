#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int min = 0;
	for (int i = a; i <= b; i++)
	{
		int c = 0;
		while (i != 1)
		{
			if (i % 2 == 0)
			{
				i = 3 * i + 1;
				c++;
			}
			else
			{
				i = i / 2;
				c++;
			}
	    }
		if(c>min)
		{
			min = c;
		}
	}
	cout << a << " "<<b << " "<<min << endl;
	return 0;
}
