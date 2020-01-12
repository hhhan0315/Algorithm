#include <iostream>
#include <cstdio>
using namespace std;

int N;
int arr[65][65];

void quardTree(int x, int y, int nx, int ny) {
	int start = arr[x][y];

	for (int i = x; i < nx; i++) {
		for (int j = y; j < ny; j++) {
			if (arr[i][j] != start) {
				printf("(");
				quardTree(x, y, (x + nx) / 2, (y + ny) / 2);
				quardTree(x, (y + ny) / 2, (x + nx) / 2, ny);
				quardTree((x + nx) / 2, y, nx, (y + ny) / 2);
				quardTree((x + nx) / 2, (y + ny) / 2, nx, ny);
				printf(")");
				return;
			}
		}
	}
	printf("%d", start);
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}

	quardTree(0, 0, N, N);

	return 0;
}
//(0,0,8,8)
//(0,0,4,4), (0,4,4,8), (4,0,8,4), (4,4,8,8)