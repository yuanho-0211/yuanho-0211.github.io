#include<iostream>
#include <vector>
#include<algorithm>
#include <cmath>
#include <string>
#include<iomanip>
using namespace std;

int main()
{
	int n = 0;
	cout << "PERFECTION OUTPUT" << endl;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		vector<int>v;
		for (int i = 1; i <n; i++)
		{
			if (n % i == 0)
			{
				v.push_back(i);
			}
		}
		
		cout << setw(5) << n << "  ";
		int t = 0;
		for (int i = 0;i < v.size(); i++)
		{
			t = t + v[i];
		}
		if (t == n)
		{
			cout << "PERFECT" << endl;
		}
		else if (t < n)
		{
			cout << "DEFICIENT" << endl;
		}
		else if (t > n)
		{
			cout << "ABUNDANT" << endl;
		}
	}
	cout << "END OF OUTPUT" << endl;
}
