#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int a, b;
		cin >> a >> b;

		string s;
		if (a > b)
			s = ">";
		else if (a < b)
			s = "<";
		else if (a == b)
			s = "=";

		cout << "#" << i << " " << s << "\n";
	}
	return 0;
}