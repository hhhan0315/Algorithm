#include <iostream>
using namespace std;
#define MAX(a,b) ((a>b)?a:b)

int dp[2][100001];
int arr[2][100001];

int main() {
	int T, n;
	cin >> T;
	for (int tc = 0; tc < T; tc++) {
		cin >> n;
		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> arr[i][j];
			}
		}
		dp[0][0] = dp[1][0] = 0;
		dp[0][1] = arr[0][1];
		dp[1][1] = arr[1][1];
		for (int i = 2; i <= n; i++) {
			dp[0][i] = MAX(dp[1][i - 1], dp[1][i - 2]) + arr[0][i];
			dp[1][i] = MAX(dp[0][i - 1], dp[0][i - 2]) + arr[1][i];
		}
		cout << MAX(dp[0][n], dp[1][n]) << endl;
	}
	return 0;
}