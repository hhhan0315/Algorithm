#include <stdio.h>

int main() {
	int n, k;
	int arr[11];
	int count = 0;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = n; i>0; i--)
	{
		count = count + k / arr[i];
		k = k % arr[i];
	}


	printf("%d", count);
	return 0;
}