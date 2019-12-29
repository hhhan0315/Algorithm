#include <iostream>
using namespace std;
#define MAX(a,b) (a>b)?a:b

int arr[1001];
int dp[1001];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = MAX(dp[i], dp[i - j] + arr[j]);
		}
	}

	cout << dp[N];
	return 0;
	//dp[n] : n개 카드 구매 최대 가격
}