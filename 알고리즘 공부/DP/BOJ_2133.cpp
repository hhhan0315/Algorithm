#include <iostream>
using namespace std;

int dp[31];

int main() {
	int N;
	cin >> N;

	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 3;

	for (int i = 4; i <= N; i += 2) {
		dp[i] = dp[i - 2] * 3;
		for (int j = 4; i - j >= 0; j += 2) {
			dp[i] = dp[i] + dp[i - j] * 2;
		}
	}

	cout << dp[N];
	return 0;
}