#include <iostream>
using namespace std;

int N;
char arr[2188][2188];

void star(int x, int y, int n) {
	if (n == 1) {
		arr[x][y] = '*';
		return;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int div = n / 3;
			int nx = x + div * i;
			int ny = y + div * j;
			if (i != 1 || j != 1) {
				star(nx, ny, div);
			}
		}
	}
	return;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = ' ';
		}
	}

	star(0, 0, N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}

	return 0;
}