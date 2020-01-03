#include <iostream>
using namespace std;

int arr[1000000];

void eratos(int m, int n) {
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 2; i * j <= n; j++) {
			arr[i * j] = 1;
		}
	}

	for (int i = m; i <= n; i++) {
		if (arr[i] != 1)
			cout << i << "\n";
	}
}

int main() {
	int M, N;
	cin >> M >> N;

	eratos(M, N);

	return 0;
}