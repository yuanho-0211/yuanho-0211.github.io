#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	string h [100][100];
	string p [100][100];
	getline(cin, s);
	
		int t = 0;
		int f = 0;
		for (int i = 0; i < s.size(); i++)
		{
			f++;
			if (s[i] == '/n')
			{
				t++;
				f = 0;
			}
		}
		int r = 0;
		for (int j = 0; j <t ; j++)
		{
			for (int k = 0; k < f; k++)
			{
				h[j][k] = s[r];
				r++;
			}
		}
		for (int l = 0; l < t; l++)
		{
			for (int g = 0; g < f; g++)
			{
				p[l][g] = h[g][t - l];
				cout << p[l][g];
			}
			cout << endl;
		}
}
---------------------------------------------------
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> lines;
    string s;

    // 讀到 EOF
    while (getline(cin, s)) {
        lines.push_back(s);
    }

    int n = lines.size();
    int maxLen = 0;

    // 找最長行
    for (int i = 0; i < n; i++) {
        if (lines[i].size() > maxLen)
            maxLen = lines[i].size();
    }

    // 順時針旋轉 90 度
    for (int col = 0; col < maxLen; col++) {
        for (int row = n - 1; row >= 0; row--) {
            if (col < lines[row].size())
                cout << lines[row][col];
            else
                cout << ' ';
        }
        cout << endl;
    }

    return 0;
}
