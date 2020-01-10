#include <iostream>
using namespace std;
#define SIZE 1000001
#define MAX(a,b) (a>b)?a:b

int N, M;
int arr[SIZE];

int bs(int n, int m, int max) {
	int low = 1, high = max, mid = (low + high) / 2;

	while (low <= high) {
		long long cnt = 0; //if) int -> error
		for (int i = 0; i < n; i++) {
			int temp = arr[i] - mid;
			if (temp < 0)
				temp = 0;
			cnt += temp;
		}
		
		if (cnt >= m)
			low = mid + 1;
		else
			high = mid - 1;
		mid = (low + high) / 2;
	}

	return mid;
}

int main() {
	cin >> N >> M;

	int max = 0;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		max = MAX(max, arr[i]);
	}

	cout << bs(N, M, max) << "\n";

	return 0;
}