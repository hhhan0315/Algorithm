#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define SIZE 500001

int N, M;
int arr[SIZE];
int check;

int binarySearch(int n) {
	int low = 0, high = N - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] < n)
			low = mid + 1;
		else if (arr[mid] > n)
			high = mid - 1;
		else {
			return 1;
		}
	}
	return 0;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + N);

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%d", &check);
		printf("%d ", binarySearch(check));
	}

	return 0;
}