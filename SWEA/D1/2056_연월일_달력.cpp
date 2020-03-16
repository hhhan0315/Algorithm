#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int n;
		int year = 0, month = 0, day = 0;
		cin >> n;

		day = n % 100;
		n = n / 100;
		month = n % 100;
		n = n / 100;
		year = n;

		cout << "#" << i << " " << year << "/" << month << "/" << day << "\n";
	}

	return 0;
}