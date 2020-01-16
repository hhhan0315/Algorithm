#include <iostream>
using namespace std;

int N;
int arr[129][129];
int size1 = 0;
int size0 = 0;

void quardTree(int x, int y, int n1, int n2) {
	int start = arr[x][y];
	for (int i = x; i < n1; i++) {
		for (int j = y; j < n2; j++) {
			if (arr[i][j] != start) {
				quardTree(x, y, (x + n1) / 2, (y + n2) / 2);
				quardTree(x, (y + n2) / 2, (x + n1) / 2, n2);
				quardTree((x + n1) / 2, y, n1, (y + n2) / 2);
				quardTree((x + n1) / 2, (y + n2) / 2, n1, n2);
				return;
			}
		}
	}

	if (start == 1) {
		size1++;

	}
	else if (start == 0) {
		size0++;
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	quardTree(0, 0, N, N);

	cout << size0 << "\n";
	cout << size1 << "\n";
	return 0;
}