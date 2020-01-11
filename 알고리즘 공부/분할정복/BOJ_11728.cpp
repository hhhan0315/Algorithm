#include <iostream>
#include <cstdio>
using namespace std;
#define SIZE 1000001

int N, M;
int a[SIZE];
int b[SIZE];

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < M; i++)
		scanf("%d", &b[i]);

	int cnt_a = 0;
	int cnt_b = 0;
	while (true) {
		if (cnt_a == N || cnt_b == M) break;

		if (a[cnt_a] < b[cnt_b]) {
			printf("%d ", a[cnt_a]);
			cnt_a++;
		}
		else if (a[cnt_a] > b[cnt_b]) {
			printf("%d ", b[cnt_b]);
			cnt_b++;
		}
		else {
			printf("%d %d ", a[cnt_a], b[cnt_b]);
			cnt_a++;
			cnt_b++;
		}
	}
	
	while (cnt_a < N) {
		printf("%d ", a[cnt_a]);
		cnt_a++;
	}

	while (cnt_b < M) {
		printf("%d ", b[cnt_b]);
		cnt_b++;
	}

	return 0;
}