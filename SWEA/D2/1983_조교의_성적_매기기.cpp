#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

	int T, N, K;
	int mid, fin, project;
	int arr[100];
	string grade[10] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };
	cin >> T;

	for (int tc = 0; tc < T; tc++)
	{
		cin >> N >> K;
		for (int i = 0; i < N; i++)
		{
			cin >> mid >> fin >> project;
			arr[i] = mid * 35 + fin * 45 + project * 20;
		}
		int score = arr[K - 1];
		int index;
		sort(arr, arr + N);

		for (int i = 0; i < N; i++)
		{
			if (arr[i] == score)
			{
				index = N - 1 - i;
				break;
			}
		}
		cout << "#" << tc + 1 << " " << grade[10 * index / N] << endl;
		// N/10명까지 성적이 동일하다는 조건 파악.
	}

	return 0;
}