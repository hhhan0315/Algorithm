#include <iostream>
using namespace std;

int main(void)
{
	int T, N, M;
	int arr[16][16];
	cin >> T;

	for (int tc = 0; tc < T; tc++)
	{
		cin >> N >> M;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> arr[i][j];
			}
		}

		int res = 0;
		for (int i = 0; i <= N - M; i++)
		{
			for (int j = 0; j <= N - M; j++)
			{
				int sum = 0;
				for (int k = i; k < i + M; k++)
				{
					for (int l = j; l < j + M; l++)
					{
						sum += arr[k][l];
					}
				}
				if (res < sum)
					res = sum;
			}
		}

		cout << "#" << tc + 1 << " " << res << endl;
	}

	return 0;
}