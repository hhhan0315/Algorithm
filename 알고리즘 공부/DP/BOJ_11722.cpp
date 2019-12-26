#include <iostream>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
	int N;
	int max = 0;
	cin >> N;
	//arr[0] = 1001;
	for (int i = 1; i <= N; i++)
		cin >> arr[i];
	/*
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		}
		if (max < dp[i])
			max = dp[i];
	}
	*/

	for (int i = 1; i <= N; i++) {
		int cnt = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				if (cnt < dp[j])
					cnt = dp[j];
			}
		}
		dp[i] = cnt + 1;
		if (max < dp[i])
			max = dp[i];
	}
	cout << max << endl;

	return 0;
}