#include <iostream>
using namespace std;

int main(void)
{
	int T, N;
	cin >> T;
	int arr[7][7];

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> arr[i][j];
			}
		}

		cout << "#" << tc << endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = N - 1; j >= 0; j--)
			{
				cout << arr[j][i];
			}
			cout << " ";
			for (int j = N - 1; j >= 0; j--)
			{
				cout << arr[N - 1 - i][j];
			}
			cout << " ";
			for (int j = 0; j < N; j++)
			{
				cout << arr[j][N - 1 - i];
			}
			cout << endl;
		}
	}

	return 0;
}