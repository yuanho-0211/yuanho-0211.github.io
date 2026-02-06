#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string s;
	bool f = false;
	while (getline(cin,s))
	{
		int a[128] = { 0 };
		char b;
		if (f)
		{
			cout << endl;
		}
		f = true;;
		for (int i = 0; i < s.size(); i++)
		{
			char b = s[i];
			a[b]++;
		}
		vector <pair<int, int>> v;
		for (int j = 0; j<128 ; j++)
		{
			
			if (a[j] > 0)
			{
				v.push_back(make_pair(j, a[j]));
			}
		}
		for (int k = 0; k < v.size(); k++)
		{
			int min = k;
			for (int l = k+1; l < v.size(); l++)
			{
				if (v[l].second < v[min].second)
				{
					min = l;
				}
				else if (v[l].second == v[min].second && v[l].first > v[min].first)
				{
					min = l;
				}
			}
			pair<int, int> temp = v[k];
			v[k] = v[min];
			v[min] = temp;
		}
		for (int j = 0; j < v.size(); j++)
		{
			cout << v[j].first << " " << v[j].second << endl;
		}
		
	}
	
	
}
