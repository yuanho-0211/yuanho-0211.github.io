#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int k = 0;
		if (a == 0 && b == 0)
		{
			return 0;
		}
		else
		{
			for (int i = a; i <= b; i++)
			{
				int x = sqrt(i);
				if ( x* x == i)
				{
					k++;
				}
			}
			cout << k << endl;
		}
	}
}
-------------------------------------------------
	#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;

        int L = ceil(sqrt(a));
        int R = floor(sqrt(b));

        if (L > R)
            cout << 0 << endl;
        else
            cout << (R - L + 1) << endl;
    }
    return 0;
}
