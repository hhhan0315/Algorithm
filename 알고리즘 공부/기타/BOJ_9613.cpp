#include <iostream>
using namespace std;

long long arr[100];

long long gcd(long long a, long long b) {
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main() {
	int t;
	cin >> t;

	int n;
	for (int tc = 0; tc < t; tc++) {
		long long sum = 0;
		cin >> n;
		for (int nc = 0; nc < n; nc++) {
			cin >> arr[nc];
		}

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				long long g = arr[i] > arr[j] ? gcd(arr[i], arr[j]) : gcd(arr[j], arr[i]);
				sum += g;
			}
		}
		cout << sum << "\n";
	}
	return 0;

}