#include <iostream>
using namespace std;

int main() {
	int t;
	//int n[11];
	int n;
	int dp[10001];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 4; j <= n; j++) {
			dp[j] = dp[j - 3] + dp[j - 2] + dp[j - 1];
		}
		cout << dp[n] << endl;
	}
	return 0;
}