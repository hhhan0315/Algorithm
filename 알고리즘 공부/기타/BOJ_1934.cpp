#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main() {
	int T, A, B;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A >> B;

		int g = (A > B) ? gcd(A, B) : gcd(B, A);

		cout << A * B / g << "\n";
	}
	return 0;
}