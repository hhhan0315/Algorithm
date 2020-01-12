#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int N;

void solve(int n, int x, int y) {
	if (n == 0) return;
	int z = 6 - x - y;
	solve(n - 1, x, z);
	printf("%d %d\n", x, y);
	solve(n - 1, z, y);
}

int main() {
	scanf("%d", &N);

	//cout << pow(2, N) - 1 << "\n";
	cout << (1 << N) - 1 << "\n";
	solve(N, 1, 3);

	return 0;
}
//2^20 : pow 범위 초과
//1<<3 1연산자 왼쪽 3번 이동 ( 0001 -> 1000) 1000 = 8