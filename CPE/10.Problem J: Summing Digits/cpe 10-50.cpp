g#include<iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	string a;
	while (cin >> s)
	{
		if (s == "0")
		{
			break;
		}
		bool d = false;
		while (!d)
		{
			int h = 0;
			for (int i = 0; i < s.size(); i++)
			{
				h = h + s[i] - '0';
			}
			a = to_string(h);
			if (a.size() < 2)
			{
				d = true;
			}
			s = a;
		}
		cout << a << endl;
	}
}
-----------------------------------------
#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long n;
    while (cin >> n && n != 0) {
        while (n >= 10) {   // 只要不是個位數就繼續拆
            n = digitSum(n);
        }
        cout << n << endl;
    }
    return 0;
}
