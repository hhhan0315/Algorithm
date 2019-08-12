#include <iostream>
using namespace std;

int result;
long long memo[91];

void fib(int n) {
	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
			memo[0] = 0;
		if (i == 1)
			memo[1] = 1;
		if (i >= 2)
			memo[i] = memo[i - 2] + memo[i - 1];
	}
}

int main() {
	int n;
	cin >> n;
	fib(n);
	cout << memo[n];
	return 0;

}