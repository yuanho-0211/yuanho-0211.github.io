#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n,a;
	vector <int> v;
	vector <int> b;
	bool t = false;
	int m = 1;
	while (cin >> n)
	{
		v.clear();
		b.clear();
		while (n--)
		{
			cin >> a;
			v.push_back(a);
		}
			for (int i = 0; i < v.size()-1; i++)
			{
				if (v[i] >= v[i + 1])
				{
					cout <<" Case #" << m <<":" << " It is not a B2-Sequence." << endl;
					return 0;
				}
			}
			
			for (int j = 1; j < v.size(); j++)
			{
				for (int p = 0; p < v.size(); p++)
				{
					b.push_back(v[p] + v[j + p]);
				}
			}
			int k = 0;
			for (int l = 1; l < b.size(); l++)
			{
				if (b[k] == b[l + k])
				{
					t = true;
				}	
			    k++;
			}
			if (t)
			{
				cout << " Case #" << m << ":"<< " It is not a B2-Sequence." << endl;
			}
			else
			{
				cout << " Case #" << m << ":"<< " It is a B2-Sequence" << endl;
			}
			
			
		
	}

	m++;
		
	
}
-----------------------------------------------------------------------------
