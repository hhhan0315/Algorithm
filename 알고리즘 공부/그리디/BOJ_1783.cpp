#include <iostream>
#include <algorithm>
using namespace std;

int N, M;

int main() {
	cin >> N >> M;

	if (N == 1) {
		cout << 1;
	}
	else if (N == 2) {
		cout << min(4, (M + 1) / 2);
	}
	else {
		if (M <= 6)
			cout << min(M, 4);
		else
			cout << M - 2;
	}

	return 0;
}