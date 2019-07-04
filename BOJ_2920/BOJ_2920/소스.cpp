#include <stdio.h>
int main() {
	int arr[8];
	int a = 0, d = 0;
	for (int i = 0; i<8; i++) {
		scanf("%d", &arr[i]);
		if (i + 1 == arr[i]) a++;
		if (8 - i == arr[i]) d++;
	}
	if (a == 8) printf("ascending");
	else if (d == 8) printf("descending");
	else printf("mixed");
	return 0;
}