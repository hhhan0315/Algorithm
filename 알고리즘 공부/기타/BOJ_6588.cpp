#include <iostream>
#include <cstdio>
using namespace std;
#define MAX_SIZE 1000000

int arr[MAX_SIZE];

void eratos() {
	for (int i = 2; i * i < MAX_SIZE; i++) {
		if (arr[i] == 0) {
			for (int j = i * i; j < MAX_SIZE; j += i) {
				arr[j] = 1;
			}
		}
	}
	arr[1] = 1;
}

void gold(int n) {
	int i, j;
	int mid = n;
	int check = 1;
	for (int i = 0, j = n; i <= mid; i++, j--) { //***important
		if (i % 2 == 1 && j % 2 == 1 && arr[i] != 1 && arr[j] != 1) {
			printf("%d = %d + %d\n", n, i, j);
			check = 0;
			return;
		}
	}
	if (check == 1) {
		printf("Goldbach's conjecture is wrong.\n");
		return;
	}
}

int main() {
	eratos();
	while (1) {
		int n;
		scanf("%d", &n);
		if (n == 0) break;
		gold(n);
	}

	return 0;
}