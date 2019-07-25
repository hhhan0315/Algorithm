#include <stdio.h>

int main() {
	int n, temp;
	int arr[1001];
	int time[1001];
	int sum = 0;
	int time_sum = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i<n; i++)
	{
		sum += arr[i];
		time[i] = sum;
		time_sum += time[i];
	}

	printf("%d", time_sum);
	return 0;
}