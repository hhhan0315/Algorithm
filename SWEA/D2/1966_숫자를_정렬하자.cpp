#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int T, N;
	cin >> T;
	int arr[50];

	for (int tc = 1; tc <= T; tc++)
	{
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + N);
		cout << "#" << tc << " ";
		for (int i = 0; i < N; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	return 0;
}