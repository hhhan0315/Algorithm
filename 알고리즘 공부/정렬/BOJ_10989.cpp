#include <iostream>
#include <cstdio>
using namespace std;

int arr[10001];

int main() {
	int N;
	scanf("%d", &N);

	int num;
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		arr[num] += 1;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}

	return 0;
}