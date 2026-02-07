#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,l;
	cin >> n;
	while (n--)
	{
		cin >> l;
		vector<int>v;
		while (l--)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		int b = 0;
		for (int i = 0; i < v.size(); i++)
		{
			for (int j = i+1; j < v.size(); j++)
			{
				if (v[i] > v[j])
				{
					b++;
				}
			}
		}
		cout << "Optimal train swapping takes " << b << " swaps." << endl;
	}
}
