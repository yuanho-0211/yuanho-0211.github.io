sample對 但gpt說有地方錯
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	string b;
	char m;
	while (cin >> a && cin >> b)
	{
		int d[26] = { 0 };
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < b.size(); j++)
			{
				if (a[i] == b[j])
				{
					m = b[j];
					d[m - 'a']++;
						
				}
			}
		}
		for (int k = 0; k < 26; k++)
		{
			if (d[k] > 0)
			{
				char r = k + 'a';
				cout << r;
			}
		}
		cout << endl;
	}
}
----------------------------------------------------------------
  #include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    string b;

    while (cin >> a && cin >> b)
    {
        int da[26] = {0};
        int db[26] = {0};

        // 統計 a 的字母次數
        for (int i = 0; i < a.size(); i++)
        {
            da[a[i] - 'a']++;
        }

        // 統計 b 的字母次數
        for (int i = 0; i < b.size(); i++)
        {
            db[b[i] - 'a']++;
        }

        // 輸出共同字母（依字母順序）
        for (int k = 0; k < 26; k++)
        {
            int times = min(da[k], db[k]);
            for (int t = 0; t < times; t++)
            {
                char r = k + 'a';
                cout << r;
            }
        }
        cout << endl;
    }
}
