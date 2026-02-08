#include <iostream>
using namespace std;
int main()
{
	int a, b,c;
	while (cin >> a && cin >> b)
	{
		c = abs(a - b);
		cout << c << endl;
	}
}
----------------------------
#include <iostream>
#include <cmath> // 需要 abs
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {     // 讀到 EOF 自動結束 (ctrl+z enter)
        cout << abs(a - b) << endl;
    }
    return 0;
}
------------------------------
#include <iostream>
#include <cmath> // 需要 abs
using namespace std;

int main() {
    long long a, b;
    while (cin >> a >> b) {     // 讀到 EOF 自動結束 (ctrl+z enter)
        cout << abs(a - b) << endl;
    }
    return 0;
}