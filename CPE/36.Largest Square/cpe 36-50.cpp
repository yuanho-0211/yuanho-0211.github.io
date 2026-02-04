#include <iostream>
using namespace std;
int main()
{
	int t, m, n, q, r, c;
	char a[100][100];
	cin >> t;
	while (t--)
	{
		cin >> m >> n>>q;
		
		
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		
			cout << m << " " << n << " " << q << endl;
			while (q--)
			{
				cin >> r >> c;
				bool t = false;
				int w = 0;
					char e = a[r][c];
					while (!t)
					{
						if (r - w < 0 || r + w >= m || c - w < 0 || c + w >= n)
							break;

						// 上、下邊
						for (int l = c - w; l <= c + w; l++) {
							if (a[r - w][l] != e || a[r + w][l] != e) {
								t = true;
								break;
							}
						}

						// 左、右邊
						for (int k = r - w + 1; k <= r + w - 1 && !t; k++) {
							if (a[k][c - w] != e || a[k][c + w] != e) {
								t = true;
								break;
							}
						}
						if (t)
						{
							break;
						}

						w++;
					}
					

						cout << (2*(w-1) + 1) << endl;

					
				
			} 
			
		
	}
}
