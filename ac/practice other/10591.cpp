#include<iostream>
using namespace std;
int main()
{
	int t,a,b,s;
	cin >> t;
	int u = 0;
	while (t--)
	{
		u++;
		cin >> a;
		b = a;
		if (a == 0)
		{
			cout << "Case #" << u << ": " << a << " is an Unhappy number." << endl;
			continue;
		}
		while (b != 1)
		{
			s = 0;
			while (b > 0)
			{
				s = s + (b % 10) * (b % 10);
				b = b / 10;
			}
			b = s;
			if (b == a||b==4)
			{
				break;
			}
		}
		if (b == 1)
		{
			cout<< "Case #"<<u<<": "<<a<<" is a Happy number."<<endl;

		}
		else
		{
			cout << "Case #" << u << ": " << a << " is an Unhappy number." << endl;
		}
	}

}
