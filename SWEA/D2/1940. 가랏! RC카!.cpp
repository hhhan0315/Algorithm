#include <iostream>
using namespace std;

int main(void)
{
	int T, N;
	cin >> T;

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;
		int speed = 0, option;
		int dis = 0, sum_speed = 0;
		for (int i = 0; i < N; i++)
		{
			cin >> option;
			if (option == 0)
			{
				dis += sum_speed;
			}
			else if (option == 1)
			{
				cin >> speed;
				sum_speed += speed;
				dis += sum_speed;
			}
			else
			{
				cin >> speed;
				sum_speed -= speed;
				if (sum_speed < 0) sum_speed = 0;
				dis += sum_speed;
			}
		}

		cout << "#" << tc << " " << dis << endl;
	}

	return 0;
}