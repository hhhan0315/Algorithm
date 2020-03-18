#include <iostream>
using namespace std;

int main(void)
{
	int T, m1, d1, m2, d2;
	cin >> T;

	int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> m1 >> d1 >> m2 >> d2;
		int sum = 0;
		for (int i = m1; i < m2; i++)
		{
			sum += day[i - 1];
		}
		sum += (d2 - d1) + 1;

		cout << "#" << tc << " " << sum << endl;
	}

	return 0;
}