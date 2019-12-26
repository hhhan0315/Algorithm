#include <iostream>
using namespace std;
#define MAX_SIZE 100001
#define max(a,b) (a>b)?a:b

int arr[MAX_SIZE];
int dp[MAX_SIZE];

int main() {
	int n;
	int result = -1000;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++) {
		dp[i] = max(arr[i], dp[i - 1] + arr[i]);
		if (result < dp[i])
			result = dp[i];
	}
	cout << result << endl;

	return 0;
}