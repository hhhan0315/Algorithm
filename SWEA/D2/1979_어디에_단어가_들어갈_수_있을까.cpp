#include <iostream>
using namespace std;

int main()
{
	int T, N, K;
	int arr[15][15];
	cin >> T;

	for (int tc = 0; tc < T; tc++)
	{
		cin >> N >> K;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> arr[i][j];
			}
		}

		// 가로 확인
		int res = 0;
		for (int i = 0; i < N; i++)
		{
			int cnt = 0;
			int j = 0;
			while (true)
			{
				if (arr[i][j] == 0)
				{
					if (cnt == K) res++;
					cnt = 0;
					j++;
				}
				else
				{
					cnt++;
					j++;
				}
				if (j == N)
				{
					if (cnt == K) res++;
					break;
				}
			}
		}

		// 세로 확인
		for (int i = 0; i < N; i++)
		{
			int cnt = 0;
			int j = 0;
			while (true)
			{
				if (arr[j][i] == 0)
				{
					if (cnt == K) res++;
					cnt = 0;
					j++;
				}
				else
				{
					cnt++;
					j++;
				}
				if (j == N)
				{
					if (cnt == K) res++;
					break;
				}
			}
		}

		cout << "#" << tc + 1 << " " << res << endl;
	}

	return 0;
}