#include <iostream>
using namespace std;

void change(int n) {
	if (n == 0) {
		return;
	}
	else if (n % -2 == 0) {
		change(n / -2);
		cout << "0";
	}
	else {
		change((n - 1) / -2);
		cout << "1";
		//-13/-2 : 6
		// i want -13/-2 : 7 -> -14/-2 : 7
	}
}

int main() {
	int N;
	cin >> N;

	if (N == 0) {
		cout << "0";
		return 0;
	}

	change(N);

	return 0;
}