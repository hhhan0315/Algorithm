#include <iostream>
using namespace std;

int memo[41];

void fibo(int n) {
	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
			memo[0] = 1;
		else if (i == 1)
			memo[1] = 1;
		else if (i >= 2)
			memo[i] = memo[i - 1] + memo[i - 2];
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i<t; i++)
	{
		int n;
		cin >> n;
		if (n == 0)
			cout << "1 0" << "\n";
		else if (n == 1)
			cout << "0 1" << "\n";
		else {
			fibo(n);
			cout << memo[n - 2] << " " << memo[n - 1] << "\n";
		}
	}
	return 0;
}