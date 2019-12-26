#include <iostream>
using namespace std;

int arr[1001];
int dp1[1001];
int dp2[1001];

int main() {
	int N;
	int total = 0;
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	for (int i = 1; i <= N; i++) {
		dp1[1] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && dp1[i]< dp1[j]+1) {
				dp1[i] = dp1[j] + 1;
			}
		}
	}

	for (int i = N; i >= 1; i--) {
		dp2[i] = 1;
		for (int j = N; j > i; j--) {
			if (arr[j] < arr[i] && dp2[i] < dp2[j]+1) {
				dp2[i] = dp2[j] + 1;
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		if (total < dp1[i] + dp2[i] -1)
			total = dp1[i] + dp2[i] -1;
	}

	cout << total << endl;

	return 0;
}