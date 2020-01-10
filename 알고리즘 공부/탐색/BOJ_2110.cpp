#include <iostream>
#include <algorithm>
using namespace std;
#define SIZE 200001

int N, C;
int arr[SIZE];

int binary_search(int l, int r) {
	int low = l, high = r;
	int ans = 0;

	while (low <= high) {
		int mid = (low + high) / 2;
		int cnt = 1;
		int start = arr[0];

		for (int i = 1; i < N; i++) {
			if (arr[i] - start >= mid) {
				cnt++;
				start = arr[i];
			}
		}

		if (cnt >= C) {
			low = mid + 1;
			ans = mid;
		}
		else
			high = mid - 1;
	}
	return ans;
}

int main() {
	cin >> N >> C;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);

	//int result = binary_search(arr[0], arr[N - 1]);
	int result = binary_search(1, arr[N - 1] - arr[0]);
	//min : 1, max : 마지막집-처음집
	cout << result << "\n";

	return 0;
}