#include <iostream>
using namespace std;
#define MIN(a,b) a<b?a:b

int N, M, K;

int main() {
	cin >> N >> M >> K;

	int ans = MIN(N / 2, M);
	ans = MIN(ans, (N + M - K) / 3);
	cout << ans;

	return 0;
}