#include<iostream>
#include<string>
using namespace std;

int main()
{
	string country;
	int n = 0;
	string c[100];
	int a[100];
	int t;
	cin >> t;
	for (int j = 0 ; j < t; j++)
	{
	   while (cin >> country)
		{
			for (int i = 0; i < n; i++)
			{
				if (country != c[i])
				{
					c[n] = country;
					a[n] = 1;
				}
				else
				{
					a[n] = a[n] + 1;
				}
				n++;
			}

		}

	}
		
}
----------------------------------------------------------
	#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 吃掉換行

    string country[2000];
    int count[2000] = { 0 };
    int total = 0;

    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;
        string name;
        getline(cin, name); // 讀完名字

        bool found = false;
        for (int j = 0; j < total; j++) {
            if (country[j] == c) {
                count[j]++;
                found = true;
                break;
            }
        }

        if (!found) {
            country[total] = c;
            count[total] = 1;
            total++;
        }
    }

    // 排序（最基本的冒泡排序）
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (country[j] > country[j + 1]) {
                string tmp = country[j];
                country[j] = country[j + 1];
                country[j + 1] = tmp;

                int t = count[j];
                count[j] = count[j + 1];
                count[j + 1] = t;
            }
        }
    }

    // 輸出
    for (int i = 0; i < total; i++) {
        cout << country[i] << " " << count[i] << endl;
    }

    return 0;
}
