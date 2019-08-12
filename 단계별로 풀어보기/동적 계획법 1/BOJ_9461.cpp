#include <iostream>
using namespace std;

long long memo[101];

int rec(int n) {
	memo[0] = 0;
	memo[1] = 1;
	memo[2] = 1;
	memo[3] = 1;
	memo[4] = 2;
	for (int i = 5; i <= n; i++)
	{
		memo[i] = memo[i - 1] + memo[i - 5];
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		rec(n);
		cout << memo[n] << "\n";
	}
	return 0;
}