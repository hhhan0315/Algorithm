#include <iostream>
using namespace std;
int check[8];

void init()
{
	for (int i = 0; i < 8; i++)
		check[i] = 0;
}

int main(void)
{
	int T, money;
	cin >> T;
	int won[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> money;
		init();
		for (int i = 0; i < 8; i++)
		{
			if (money / won[i] != 0)
			{
				int temp = money / won[i];
				money %= won[i];
				check[i] = temp;
			}
		}

		cout << "#" << tc << endl;
		for (int i = 0; i < 8; i++)
		{
			cout << check[i] << " ";
		}
		cout << endl;
	}

	return 0;
}