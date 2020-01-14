#include <iostream>
using namespace std;

int E, S, M;

int main() {
	cin >> E >> S >> M;

	int a = 0, b = 0, c = 0;
	int year = 0;
	while (true) {
		a++;
		b++;
		c++;
		year++;

		if (a > 15) a = 1;
		if (b > 28) b = 1;
		if (c > 19) c = 1;

		if (a == E && b == S && c == M) break;
	}

	cout << year;
	return 0;
}