#include <iostream>
using namespace std;
#define MOD 10007;

int dp[10][1001];
//dp[i][j] : i는 시작수, j는 자리수
int main() {
	int N;
	int total = 0;
	cin >> N;

	for (int i = 0; i < 10; i++) {
		dp[i][1] = 1;
	}
	
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0+j; k < 10; k++) {
				dp[j][i] += dp[k][i - 1];
				dp[j][i] %= MOD;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		total = (total + dp[i][N]) % MOD;
	}

	cout << total;
	return 0;

}