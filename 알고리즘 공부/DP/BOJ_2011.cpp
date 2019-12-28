#include <iostream>
#include <string>
using namespace std;
#define mod 1000000

int arr[5001];
int dp[5001];

int main() {
	string s;
	cin >> s;
	int length = s.size();

	for (int i = 1; i <= length; i++) {
		arr[i] = s[i - 1] - '0';
	}

	if (arr[1] == 0 && length == 1) {
		cout << 0;
		return 0;
	}

	dp[0] = 1;
	//dp[1] = 1;
	for (int i = 1; i <= length; i++) {
		if (arr[i] >= 1 && arr[i] <= 9) {
			dp[i] = (dp[i] + dp[i - 1]) % mod;
		}
		if (i == 1)continue;

		int temp = arr[i] + arr[i - 1] * 10;
		if (temp >= 10 && temp <= 26) {
			dp[i] = (dp[i] + dp[i - 2]) % mod;
		}
	}

	cout << dp[length] << endl;

	return 0;
}