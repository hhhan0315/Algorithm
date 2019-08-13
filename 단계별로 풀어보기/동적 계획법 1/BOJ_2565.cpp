#include <iostream>
using namespace std;

int arr[501];
int dp[501];

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a] = b;
	}

	int max = 0;
	for (int i = 1; i <= 500; i++)
	{
		if (arr[i] == 0) continue;
		dp[i] = 1;
		for (int j = 1; j<i; j++)
		{
			if (arr[i]>arr[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		}
		if (max < dp[i])
			max = dp[i];
	}

	cout << N - max;

}
//continue를 작성해주지 않아서 오류 발생
//제거하는 관점에서 풀면 어렵고 하나씩 추가해주면서 하는 방향으로 생각해야함