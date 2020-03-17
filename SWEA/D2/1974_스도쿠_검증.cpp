#include <iostream>
using namespace std;
int visited[10];

void init()
{
	for (int i = 1; i < 10; i++)
	{
		visited[i] = 0;
	}
}

int main(void)
{
	int T;
	cin >> T;
	int arr[9][9];

	for (int tc = 1; tc <= T; tc++)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cin >> arr[i][j];
			}
		}

		bool flag = true;
		// 가로
		for (int i = 0; i < 9; i++)
		{
			init();
			for (int j = 0; j < 9; j++)
			{
				int temp = arr[i][j];
				if (visited[temp] == 0)
				{
					visited[temp] = 1;
				}
				else
				{
					flag = false;
					break;
				}
			}
		}
		// 세로
		for (int i = 0; i < 9; i++)
		{
			init();
			for (int j = 0; j < 9; j++)
			{
				int temp = arr[j][i];
				if (visited[temp] == 0)
				{
					visited[temp] = 1;
				}
				else
				{
					flag = false;
					break;
				}
			}
		}
		// 정사각형
		for (int i = 0; i < 9; i += 3)
		{
			for (int j = 0; j < 9; j += 3)
			{
				init();
				for (int k = 0; k < 3; k++)
				{
					for (int l = 0; l < 3; l++)
					{
						int temp = arr[i + k][j + l];
						if (visited[temp] == 0)
						{
							visited[temp] = 1;
						}
						else
						{
							flag = false;
							break;
						}
					}
				}
			}
		}

		if (flag == true)
			cout << "#" << tc << " 1" << endl;
		else
			cout << "#" << tc << " 0" << endl;
	}
	// 배열로 확인했지만 1~9의 합이 45인 걸 활용하면 더 간단히도 가능하다.

	return 0;
}