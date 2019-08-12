#include <iostream>
using namespace std;

int memo[1000001];

int fibo(int n) {
	memo[0] = 1;
	memo[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		memo[i] = memo[i - 2] + memo[i - 1];
		memo[i] = memo[i] % 15746;
	}
}

int main() {
	int n;
	cin >> n;
	fibo(n);
	cout << memo[n];
	return 0;
}
//피보나치 수열이었고 값마다 저장을 15746을 나눈 나머지인 걸 누락해서 틀림