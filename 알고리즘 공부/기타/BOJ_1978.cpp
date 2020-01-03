#include <iostream>
using namespace std;

int arr[1001];

int eratos(int num) {
	if (num <= 1) return 0;

	for (int i = 2; i <= num; i++) {
		for (int j = 2; i * j <= num; j++) {
			arr[i*j] = 1;
		}
	}

	if (arr[num] != 1)
		return 1;
	else
		return 0;
}

int main() {
	int N;
	cin >> N;

	int num;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> num;
		sum += eratos(num);
	}

	cout << sum;
	return 0;
}