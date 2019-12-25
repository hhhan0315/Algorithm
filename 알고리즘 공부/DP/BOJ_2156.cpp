#include <iostream>
using namespace std;
#define max(a,b) (a>b)?a:b

int arr[10001];
int dp[10001];

int main() {
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];

	for (int i = 3; i <= n; i++) {
		int result = 0;
		result = max(arr[i] + dp[i - 2], dp[i - 1]);
		result = max(result, dp[i - 3] + arr[i - 1] + arr[i]);
		dp[i] = result;
	}
	cout << dp[n];
}