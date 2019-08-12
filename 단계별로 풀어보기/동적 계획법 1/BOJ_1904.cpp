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
//�Ǻ���ġ �����̾��� ������ ������ 15746�� ���� �������� �� �����ؼ� Ʋ��