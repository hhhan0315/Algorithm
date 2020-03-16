#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int sum = 0;
		for (int j = 1; j <= 10; j++) {
			cin >> n;
			if (n % 2 != 0) {
				sum += n;
			}
		}

		cout << "#" << i << " " << sum << "\n";
	}
	return 0;
}