#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if ((a - b) == -1 || (a - b) == 2) {
		cout << "B";
	}
	else {
		cout << "A";
	}
}