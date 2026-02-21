#include <iostream>
#include <string>
using namespace std;
int main()
{
	int m, d, b,k;
	string w;
	while (cin >> m >> b)
	{
		if (m == 4 || m == 6 || m == 8 || m == 10 || m == 12)
		{
			d=m;
		}
		else if (m==3 || m == 5 || m == 7)
		{
			d = m + 4;
		}
		else if ( m == 9 || m == 11)
		{
			d = m - 4;
			
		}
		else if ((m == 1  )||( m == 2 ))
		{
			d = m *10+m-1;
		}
		
		
		k = (b - d+1) % 7;     
		if (k < 0) k += 7;
		
		switch (k)
		{
		case 1:
			w="Monday";
			break;
		case 2:
			w = "Thusday";
			break;
		case 3:
			w = "Wednesday";
			break;
		case 4:
			w = "Thursday";
			break;
		case 5:
			w = "Friday";
			break;
		case 6:
			w = "Saturday";
			break;
		case 0:
			w = "Sunday";
			break;


		}
		cout << w;
	}
	cout << endl;
}
---------------------------------------
#include <iostream>
#include <string>
using namespace std;

int main() {
    int m, d;
    string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
 int n;
cin>>n;
    while (n--) {
       cin>>m>>d;
        int doomsday;
        switch(m) {
            case 1: doomsday = 10; break;
            case 2: doomsday = 21; break;
            case 3: doomsday = 7; break;  // 用 3/0 計算偏移
            case 4: doomsday = 4; break;
            case 5: doomsday = 9; break;
            case 6: doomsday = 6; break;
            case 7: doomsday = 11; break;
            case 8: doomsday = 8; break;
            case 9: doomsday = 5; break;
            case 10: doomsday = 10; break;
            case 11: doomsday = 7; break;
            case 12: doomsday = 12; break;
        }

        

        int diff = d - doomsday;
        int k = (diff % 7 + 7) % 7;  // 確保非負
        int weekday = (0 + k) % 7;   // 0 = Monday

        cout << week[weekday] << endl;
    }
}