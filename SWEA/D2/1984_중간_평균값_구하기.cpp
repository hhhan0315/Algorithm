#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[10];
	int T, num;
	cin >> T;

	for (int tc = 0; tc < T; tc++)
	{
		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + 10);

		int sum = 0;
		for (int i = 1; i < 9; i++)
		{
			sum += arr[i];
		}
		double result = sum / 8.0;
		result = floor(result + 0.5);
		// floor 내림 함수 이용해서 반올림
		cout << "#" << tc + 1 << " " << result << endl;
	}

	return 0;
}