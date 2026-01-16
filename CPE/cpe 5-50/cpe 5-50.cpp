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
----------------------------------------------------------
	#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        if (s == "0") break; // 輸入結束

        int oddSum = 0, evenSum = 0;
        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';
            if (i % 2 == 0)
                oddSum += digit;   // 字串第一位算作位置 0（奇數位）
            else
                evenSum += digit;
        }

        if ((oddSum - evenSum) % 11 == 0 || (oddSum - evenSum) % 11 == -0)
            cout << s << " is a multiple of 11." << endl;
        else
            cout << s << " is not a multiple of 11." << endl;
    }
    return 0;
}
