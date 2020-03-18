#include <iostream>
using namespace std;

int main(void)
{
	int T, N, num;
	cin >> T;
	char c[10];
	int n[10];

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			cin >> c[i] >> n[i];
			
		}

		cout << "#" << tc << endl;
		int cnt = 0;
		for (int i = 0; i < N; i++)
		{
			while (n[i] != 0)
			{
				cout << c[i];
				n[i]--;
				cnt++;
				if (cnt == 10)
				{
					cout << endl;
					cnt = 0;
				}
			}
		}
		cout << endl;
	}
	// 이차원 배열로 했다가 답은 맞지만 runtime error 발생함.

	return 0;
}