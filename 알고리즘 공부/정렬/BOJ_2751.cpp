#include <iostream>
#include <cstdio>
using namespace std;
#define MAX_SIZE 1000000
#define SWAP(x,y,t) (t)=(x), (x)=(y), (y)=(t)

int arr[MAX_SIZE];

void quick_sort(int arr[], int left, int right) {
	int temp;
	int q_left = left;
	int q_right = right;
	int pivot = arr[(left + right) / 2];

	while (q_left <= q_right) {
		while (pivot > arr[q_left]) q_left++;
		while (pivot < arr[q_right]) q_right--;

		if (q_left <= q_right) {
			SWAP(arr[q_left], arr[q_right], temp);
			q_left++;
			q_right--;
		}
	}
	if (left < q_right) quick_sort(arr, left, q_right);
	if (q_left < right) quick_sort(arr, q_left, right);
}

int main() {
	int N;
	int temp;
	cin >> N;

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	quick_sort(arr, 0, N - 1);

	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);

	return 0;
}