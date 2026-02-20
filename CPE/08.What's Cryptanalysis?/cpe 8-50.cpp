#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++)
	{
		getline(cin,s);
		for (int i = 0; i < s.size(); i++)
		{
			string u ;
			u = toupper(s[i]);
		}
	}
}
----------------------------------------
	#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	int m[26] = { 0 };
	cin >> n;
	cin.ignore();
	string s;
	for (int j = 0; j < n; j++)
	{
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			char u = s[i];

			if (isalpha(u))
			{
				u = toupper(s[i]);
				m[u - 'A']++;

			}
		}
	}
		char letter[26];
		int h[26];
		int k = 0;
		for (int i = 0; i < 26; i++)
		{
			if (m[i] > 0)
			{
				letter[k] = 'A' + i;
				h[k] = m[i];
				k++;
			}
		}
			for (int j = 0; j < k - 1; j++)
			{
				int max= j;
				for (int l = j+1; l < k ; l++)
				{
					if (h[l] > h[max])
					{
						max = l;
					}
					else if (h[l] == h[max]&& letter[l]< letter[max])
					{
						max = l;
					}
				}
				swap(h[j], h[max]);
				swap(letter[j], letter[max]);
			}

			for (int i = 0; i < k; i++)
			{
				cout << letter[i] << " " << h[i] << endl;
			}
			return 0;
	
}
