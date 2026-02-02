#include<iostream>
using namespace std;
int main()
{
	long long m, n;
	while (cin >> n >> m)
	{
		
		bool t = false;
		int k = 1;
		long long a = n;

		if (m <= 1 or n < m)
		{

			cout << "Boring!" << endl;
			continue;
		}
		while (n != 1&&!t)
		{
			
			if ((n % m) == 0)
			{
				n = n / m;
				k++;
			}
			else
			{
				t = true;
			}
		}
		if (t)
		{
			cout<<"Boring!"<<endl;

		}
		else
		{
			cout << a ;
			for (int i = 1; i < k; i++)
			{
				a = a /m;
				cout <<" "<< a;
			}
			cout << endl;
		}
	}
}
