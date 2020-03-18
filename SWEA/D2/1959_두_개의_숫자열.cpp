#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int T, N, M;
	cin >> T;
	int a[20], b[20];

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N >> M;
		for (int i = 0; i < N; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < M; i++)
		{
			cin >> b[i];
		}

		int res = 0;
		if (N < M)
		{
			for (int i = 0; i < M - N + 1; i++)
			{
				int sum = 0;
				for (int j = 0; j < N; j++)
				{
					sum += a[j] * b[j + i];
				}
				if (res < sum) res = sum;
			}
		}
		else
		{
			for (int i = 0; i < N - M + 1; i++)
			{
				int sum = 0;
				for (int j = 0; j < M; j++)
				{
					sum += a[j + i] * b[j];
				}
				if (res < sum) res = sum;
			}
		}

		cout << "#" << tc << " " << res << endl;
	}

	return 0;
}