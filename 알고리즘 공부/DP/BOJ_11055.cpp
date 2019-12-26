#include <iostream>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
	int N;
	int max = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (dp[i] < dp[j] + arr[i]) {
					dp[i] = dp[j] + arr[i];
				}
			}
		}
		if (max < dp[i])
			max = dp[i];
	}
	cout << max << endl;

	return 0;
}