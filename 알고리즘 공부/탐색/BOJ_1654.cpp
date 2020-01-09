#include <iostream>
using namespace std;
#define MAX(a,b) (a>b)?a:b
typedef long long ll;

ll arr[10001];

ll bs(int k, int n, int max) {
	ll low = 1, high = max, mid = (low + high) / 2;

	while (low <= high) {
		int cnt = 0;
		for (int i = 0; i < k; i++) {
			cnt += arr[i] / mid;
		}

		if (cnt >= n)
			low = mid + 1;
		else
			high = mid - 1;

		mid = (low + high) / 2;
	}
	return mid;
}

int main() {
	int K, N;
	cin >> K >> N;

	ll max = 0;
	for (int i = 0; i < K; i++) {
		cin >> arr[i];
		max = MAX(max, arr[i]);
	}

	ll result = bs(K, N, max);
	cout << result;

	return 0;
}