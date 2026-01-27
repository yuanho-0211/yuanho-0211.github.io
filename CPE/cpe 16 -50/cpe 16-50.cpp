#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	int s, n, i;
	double p,k;
	cin >> s;
	while (s--)
	{
		cin >> n >> p >> i;
		k = (pow((1 - p), (i - 1)) * p) / (1 - pow((1 - p), n));
		cout << fixed<<setprecision(4)<<k;
		cout << endl;
	}
	
}
