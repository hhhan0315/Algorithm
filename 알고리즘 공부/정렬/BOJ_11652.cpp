#include <iostream>
#include <algorithm>
using namespace std;

long long arr[1000000];
//long long : -2^62 ~ 2^62

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	long long temp = arr[0];
	int cnt = 1;
	int max_cnt = 1;
	for (int i = 1; i < N; i++) {
		if (arr[i] == arr[i - 1]) {
			cnt++;
		}
		else {
			cnt = 1;
		}

		if (max_cnt < cnt) {
			max_cnt = cnt;
			temp = arr[i];
		}
	}

	cout << temp;
	return 0;
}