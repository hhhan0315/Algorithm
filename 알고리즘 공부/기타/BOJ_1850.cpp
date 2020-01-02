#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main() {
	long long A, B;
	cin >> A >> B;

	long long g = A > B ? gcd(A, B) : gcd(B, A);

	for (int i = 0; i < g; i++)
		cout << 1;

	return 0;
}