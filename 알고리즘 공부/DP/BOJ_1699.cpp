#include <iostream>
using namespace std;
#define MIN(a,b) (a<b)?a:b

int dp[100001];

int main() {
	int N;
	cin >> N;

	for (int i = 0; i <= N; i++)
		dp[i] = i;

	for (int i = 2; i <= N; i++) {
		for (int j = 2; j * j <= i; j++) {
			dp[i] = MIN(dp[i], dp[i - j * j] + 1);
		}
	}
	cout << dp[N] << endl;

	return 0;
}