#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int s, a;
	double c, d, e;
	string i;
	double pi = acos(-1.0);
	cout << fixed << setprecision(6);
	while (cin >> s >> a >> i)
	{
		if (i == "deg")
		{
			e = a * pi / 180;
		}
		if (i == "min")
		{
			e = a * pi / 180 / 60;
		}
		if (e > pi)
		{
			e = 2 * pi - e;
		}
		c = (6440 + s) * e;
		d = 2 * (6440 + s) * sin(e / 2);
		
		cout << c <<" "<< d << endl;
	}
}
