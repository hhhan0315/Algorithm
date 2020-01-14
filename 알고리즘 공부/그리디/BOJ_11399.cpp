#include <iostream>
#include <algorithm>
using namespace std;

int N, temp, sum = 0;
int arr[1001];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		temp += arr[i];
		sum += temp;
	}

	cout << sum;
	return 0;
}