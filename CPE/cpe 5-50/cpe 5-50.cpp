#include<iostream>
using namespace std;
int main()
{
	int a;
	while (cin >> a)
	{
		if (a != 0)
		{
			if (a % 11 == 0)
			{
				cout << a << " is a multiple of 11." << endl;
			}
			else
			{
				cout << a << " is not a multiple of 11." << endl;
			}

		}
		
	}
}
