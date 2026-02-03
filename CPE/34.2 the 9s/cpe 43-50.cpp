#include<iostream>
using namespace std;
int main()
{
	string n;
	
	while (cin>>n)
	{
		int s = 0;
		bool g = false;
		for (int i = 0; i < n.size(); i++)
		{
			s = s + n[i]-'0';
		}
		if (s != 0)
		{
			int t = 1;
			int h = 0;
			
			while (!g)
			{
				h = 0;
				if (s == 9)
				{
					break;
				}
				while (s > 0)
				{
					h = h + (s % 10);
					s = s / 10;
				}
				t++;
				if (h == 9)
				{
					g = true;
					break;
				}
			    else if (h < 9)
				{
					break;           // 失敗
				}
				else
				{
					s = h;
				}
				
			}
			
			
			if (h % 9 == 0)
			{
				cout << n << " is a multiple of 9 and has 9-degree " << t << "." << endl;
			}
			else
			{
				cout << n << " is not a multiple of 9." << endl;
			}
		}
		
	}
}
