#include <iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	int visited[10];

	for (int tc = 1; tc <= T; tc++)
	{
		int input;
		cin >> input;
		for (int i = 0; i < 10; i++)
		{
			visited[i] = 0;
		}

		int N = input;
		int res;
		for (int i = 0; ; i++)
		{
			int temp = N;
			while (N != 0)
			{
				visited[N % 10] = 1;
				N /= 10;
			}
			int cnt = 0;
			for (int i = 0; i < 10; i++)
			{
				if (visited[i] == 1) cnt++;
			}
			if (cnt == 10)
			{
				res = temp;
				break;
			}
			N = input * i;
		}
		cout << "# " << tc << " " << res << endl;
	}

	return 0;
}