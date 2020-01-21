#include <iostream>
#include <algorithm>
using namespace std;

int card[500001];

int upper(int num, int lo, int hi) {
	while (lo < hi) {
		int mid = (lo + hi) / 2;
		if (card[mid] <= num)
			lo = mid + 1;
		else
			hi = mid;
	}
	return hi;
}

int lower(int num, int lo, int hi) {
	while (lo < hi) {
		int mid = (lo + hi) / 2;
		if (card[mid] < num)
			lo = mid + 1;
		else
			hi = mid;
	}
	return lo;
}

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> card[i];
	}
	sort(card + 1, card + 1 + N);

	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;

		int up = upper(num, 1, N + 1);
		int lo = lower(num, 1, N + 1);
		cout << up - lo << ' ';
	}

	return 0;
}