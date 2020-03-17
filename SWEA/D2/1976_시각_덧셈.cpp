#include <iostream>
using namespace std;

int main(void)
{
	int T, h1, m1, h2, m2;
	cin >> T;
	
	for (int tc = 1; tc <= T; tc++)
	{
		cin >> h1 >> m1 >> h2 >> m2;
		int hour = h1 + h2;
		int minute = m1 + m2;

		if (minute >= 60)
		{
			minute -= 60;
			hour++;
		}

		if (hour > 12)
		{
			hour -= 12;
		}

		cout << "#" << tc << " " << hour << " " << minute << endl;
	}

	return 0;
}