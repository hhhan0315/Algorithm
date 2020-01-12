#include <iostream>
#include <cstdio>
using namespace std;
#define SIZE 2188 //3^7 + 1

int N;
int arr[SIZE][SIZE];
int cnt[3];

void solve(int x, int y, int n) {

	int start = arr[x][y];
	bool check = true;

	if (n == 1) {
		int num = start + 1;
		cnt[num]++;
		return;
	}

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (start != arr[i][j]) {
				check = false;
				break;
			}
		}
	}

	if (check) {
		int num = start + 1; // -1 -> 0, 0 -> 1, 1 -> 2
		cnt[num]++;
		return;
	}

	int newsize = n / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			solve(x + newsize * i, y + newsize * j, newsize);
		}
	}
}

int main() {
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	solve(0, 0, N);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", cnt[i]);
	}

	return 0;
}