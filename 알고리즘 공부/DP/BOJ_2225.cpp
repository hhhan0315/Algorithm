#include <iostream>
using namespace std;
#define MOD 1000000000

long dp[201][201];

int main() {
	int N, K;
	cin >> N >> K;

	for (int i = 0; i <= N; i++) {
		dp[1][i] = 1;
	}

	for (int k = 2; k <= K; k++) {
		for (int i = 0; i <= N; i++) {
			for (int j = 0; j <= i; j++) {
				dp[k][i] += dp[k - 1][j];
			}
			dp[k][i] %= MOD;
		}
	}

	cout << dp[K][N];
	return 0;
	//dp[k][n] : k�� ���ؼ� n�� ������ ����� ��
}