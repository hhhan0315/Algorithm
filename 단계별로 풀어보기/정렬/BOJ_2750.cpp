#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	int arr[1000];
	int result = 0;

	for (int i = 0; i<num; i++) {
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j<num; j++) {
		for (int k = 0; k<num - 1; k++)
		{
			if (arr[k]>arr[k + 1])
			{
				result = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = result;
			}
		}
	}

	for (int i = 0; i<num; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
//버블정렬 활용함