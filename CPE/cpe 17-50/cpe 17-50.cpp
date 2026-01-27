#include <iostream>
using namespace std;
int main()
{
	int s, d,b;
	while (cin >> s >> d)
	{
		int sum = 0;
		
		bool t = false;
		while (!t)
		{
			sum += s;
			if (sum == d)
			{
				t = true;
				b = s;
			}
			else
			{
				if (sum < d)
				{
					if ((sum + s + 1) >= d)
					{
						t = true;
						b =  s + 1;
					}
			
				}
			}
			s++;
		}
		if (t)
		{
			cout << b << endl;
		}
	}
}
