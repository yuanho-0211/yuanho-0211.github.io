#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{

	string s;
	vector <int> v;
	int p;
	while (getline(cin, s))
	{
		
		p = 0;
		bool t = false;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != ' ')
			{
				v.push_back(s[i]);
				p++;
			}
		}
		int k = 1;
		for (int i = 0; i < p; i++)
		{
			while(abs(v[i]-v[i+1])==k)
			{
					t = true;
					k++;
			}
			if (t)
			{
				continue;
			}
			else
			{
				t = false;
			}
		}

		if (t)
		{
			cout << "Jolly";
		}
		else
		{
			cout << "Not jolly";
		}
	}
}
---------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{
    string s;
    vector<int> v;
    int p;

    while (getline(cin, s))
    {
        v.clear();   // 讀新行前清空
        p = 0;
        bool t = true; // 先假設是 Jolly

        // 用 stringstream 讀整數
        stringstream ss(s);
        ss >> p;

        for (int i = 0; i < p; i++)
        {
            int num;
            ss >> num;
            v.push_back(num);
        }

        // n=1 一定是 Jolly
        if (p == 1)
        {
            cout << "Jolly\n";
            continue;
        }

        // 對每個 k 進行檢查
        for (int k = 1; k < p; k++)
        {
            bool found = false;

            for (int i = 0; i < p - 1; i++)
            {
                if (abs(v[i] - v[i + 1]) == k)
                {
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                t = false;
                break;
            }
        }

        if (t)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
}
