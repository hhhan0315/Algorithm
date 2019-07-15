#include <stdio.h>
int main() {
	int num, max, result = 0;
	int arr[101];
	scanf("%d %d", &num, &max);
	for (int i = 0; i<num; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i<num; i++) {
		for (int j = 0; j<num; j++)
		{
			for (int k = 0; k<num; k++)
			{
				if (i != j && j != k && k != i)
				{
					int sum = arr[i] + arr[j] + arr[k];
					if (sum <= max && result<sum) result = sum;
				}
			}
		}
	}
	printf("%d", result);
	return 0;
}