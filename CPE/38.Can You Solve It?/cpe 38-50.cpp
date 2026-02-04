#include<iostream>
using namespace std;

int a(int x, int y)
{
	return (x + y) * (x + y + 1) / 2 + x;
}

int main()
{
	int n;
	long long x1,x2,y1,y2;
	cin >> n;
	int p = 1;
	while (n--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "Case " << p << ":" <<" "<< a(x2, y2) - a(x1, y1) <<endl;
		p++;
	}
	
}
