#include <iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	int arr[1000];

	for (int tc = 1; tc <= T; tc++)
	{
		int N;
		cin >> N;

		int dis = 100000;
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
			if (abs(arr[i]) < dis)
			{
				dis = abs(arr[i]);
			}
		}

		int cnt = 0;
		for (int i = 0; i < N; i++)
		{
			if (abs(arr[i]) == dis)
			{
				cnt++;
			}
		}

		cout << "#" << tc << " " << dis << " " << cnt << endl;
	}

	return 0;
}