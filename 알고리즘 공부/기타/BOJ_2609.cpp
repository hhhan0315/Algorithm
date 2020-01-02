#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main() {
	int a, b;
	cin >> a >> b;

	int g = a > b ? gcd(a, b) : gcd(b, a);

	cout << g << "\n";
	cout << a * b / g << "\n";

	return 0;
}