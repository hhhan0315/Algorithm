#include <iostream>
using namespace std;

int Arr[1001];
int DP[1001];

int main() {
	int N;
	int MAX = 0;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> Arr[i];
	}

	for (int i = 1; i <= N; i++)
	{
		DP[i] = 1;
		for (int j = 1; j<i; j++)
		{
			if (Arr[i] > Arr[j] && DP[i] < DP[j] + 1)
			{
				DP[i] = DP[j] + 1;
			}
			//DP[before] < DP[current]+1 조건 만족해야 성립
		}
		if (MAX < DP[i])
			MAX = DP[i];
	}

	cout << MAX;
	return 0;
}