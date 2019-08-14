#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result = max(result, arr[i] * (n - i));
	}
	cout << result;

	return 0;
}