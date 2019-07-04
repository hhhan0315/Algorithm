#include <stdio.h>
int main() {
	int arr[9];
	int max;
	int index;
	for (int i = 0; i<9; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) max = arr[i];
		else {
			if (arr[i]>max) {
				max = arr[i];
				index = i;
			}
		}
	}
	printf("%d\n%d", max, index + 1);
	return 0;
	//index+1을 해주지 않아서 틀렸었다.
}