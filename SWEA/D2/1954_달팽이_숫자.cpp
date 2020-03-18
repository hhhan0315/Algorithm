#include <iostream>
using namespace std;

int main(void)
{
	int T, N;
	cin >> T;
	int arr[10][10];
	int visited[10][10];
	int dx[4] = { 0,1,0,-1 };
	int dy[4] = { 1,0,-1,0 };

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;
		int index = 0;

		int x = 0, y = 0;
		int num = 1;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				arr[i][j] = 0;
				visited[i][j] = 0;
			}
		}

		while (true)
		{
			if (visited[x][y] == 0)
			{
				visited[x][y] = 1;
				arr[x][y] = num;
				num++;
				int nx = x + dx[index];
				int ny = y + dy[index];

				if (visited[nx][ny] == 0 && nx >= 0 && nx < N && ny>=0 && ny < N)
				{
					x = nx;
					y = ny;
				}
				else
				{
					index++;
					index %= 4;
					x += dx[index];
					y += dy[index];
				}
			}
			else
			{
				break;
			}
		}

		cout << "#" << tc << endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}