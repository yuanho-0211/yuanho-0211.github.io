#include <iostream>
#include <string>
using namespace std;
int main()
{
	int m, d, b,k;
	string w;
	while (cin >> m >> b)
	{
		if (m == 4 || m == 6 || m == 8 || m == 10 || m == 12)
		{
			d=m;
		}
		else if (m==3 || m == 5 || m == 7)
		{
			d = m + 4;
		}
		else if ( m == 9 || m == 11)
		{
			d = m - 4;
			
		}
		else if ((m == 1  )||( m == 2 ))
		{
			d = m *10+m-1;
		}
		
		
		k = (b - d+1) % 7;     
		if (k < 0) k += 7;
		
		switch (k)
		{
		case 1:
			w="Monday";
			break;
		case 2:
			w = "Thusday";
			break;
		case 3:
			w = "Wednesday";
			break;
		case 4:
			w = "Thursday";
			break;
		case 5:
			w = "Friday";
			break;
		case 6:
			w = "Saturday";
			break;
		case 0:
			w = "Sunday";
			break;


		}
		cout << w;
	}
	cout << endl;
}
