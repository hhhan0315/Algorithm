#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int max = 0;
		for (int j = 0; j < 10; j++) {
			int n;
			cin >> n;

			if (max < n)
				max = n;
		}
		cout << "#" << i << " " << max << "\n";
	}
	return 0;
}