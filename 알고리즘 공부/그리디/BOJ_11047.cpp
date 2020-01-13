#include <iostream>
using namespace std;

int N, K;
int coin[10];
int cnt = 0;

int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++)
		cin >> coin[i];

	for (int i = N - 1; i >= 0; i--) {
		cnt += K / coin[i];
		K %= coin[i];
	}

	cout << cnt;

	return 0;
}