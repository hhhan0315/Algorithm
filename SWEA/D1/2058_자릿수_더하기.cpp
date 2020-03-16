#include <iostream>
using namespace std;

int main() {
	int n, a;
	int sum = 0;
	cin >> n;

	for (int i = 0; i < 4; i++) {
		a = n % 10;
		n = n / 10;
		sum += a;
	}
	cout << sum;
	return 0;
}