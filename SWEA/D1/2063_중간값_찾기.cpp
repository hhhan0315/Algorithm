#include <iostream>
#include <algorithm>
using namespace std;

int arr[200];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	int median = arr[n / 2];
	cout << median;
	return 0;
}