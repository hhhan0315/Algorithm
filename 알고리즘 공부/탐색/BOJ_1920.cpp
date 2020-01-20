#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define SIZE 100001

int A[SIZE];
int N, M;

int haveNum(int n) {
	int lo, hi;
	lo = 0; hi = N - 1;

	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (A[hi] < n) return 0;

		if (A[mid] == n) return 1;
		else if (A[mid] < n)
			lo = mid + 1;
		else
			hi = mid - 1;
	}
	return 0;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	sort(A, A + N);

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int num;
		scanf("%d", &num);
		printf("%d\n", haveNum(num));
	}

	return 0;
}