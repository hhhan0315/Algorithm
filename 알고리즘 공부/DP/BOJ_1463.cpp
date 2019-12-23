#include <iostream>
using namespace std;
#define MIN(x,y) ((x>y)?  y : x)

int main() {
	int x;
	int dp[1000001];
	cin >> x;

	dp[0] = dp[1] = 0;
	for (int i = 2; i <= x; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0) dp[i] = MIN(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0)dp[i] = MIN(dp[i], dp[i / 3] + 1);
	}
	cout << dp[x];
	return 0;
}