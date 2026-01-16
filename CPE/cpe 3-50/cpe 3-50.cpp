error

#include<iostream>
using namespace std;
int main()
{
	int a, b,c,d;
	while (cin >> a >> b)
	{
		if (a != 0 && b != 0)
		{
			int n = 0;
			for (int i = 1; i <= 10; i++)
			{
				
				if ((a % 10 + b % 10 +n) > 9)
				{
					n++;
				}
				a = a / 10;
				b = b / 10;
			}
			if (n == 0)
			{
				cout << "No carry operation.";
			}
			else
			{
				cout << n<<" carry operation.";
			}
		}
	}
		
}
-----------------------------------------------
  #include<iostream>
using namespace std;
int main()
{
	int a, b,c,d;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
		{
			break;
		}
		if (a > 0 || b > 0)
		{
			int n = 0;
			int k = 0;
			while (a > 0 || b > 0)
			{
				if ((a % 10 + b % 10 +k) > 9)
				{
					k=1;
					n++;
				}
				else
				{
					k = 0;
				}
				a = a / 10;
				b = b / 10;
				
			}
			if (n == 0)
			{
				cout << "No carry operation."<<endl;
			}
			else
			{
				if (n > 1)
				{
					cout << n << " carry operations." << endl;
				}
				else
				{
					cout << n << " carry operation." << endl;
				}
			}
		}
	}
		
}
------------------------------------------------------------
  #include <iostream>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;

        int n = 0; // 進位次數
        int k = 0; // 進位值

        while (a > 0 || b > 0)
        {
            if ((a % 10 + b % 10 + k) > 9)
            {
                k = 1;
                n++;
            }
            else
            {
                k = 0;
            }

            a /= 10;
            b /= 10;
        }

        if (n == 0)
            cout << "No carry operation." << endl;
        else if (n == 1)
            cout << "1 carry operation." << endl;
        else
            cout << n << " carry operations." << endl;
    }
}
