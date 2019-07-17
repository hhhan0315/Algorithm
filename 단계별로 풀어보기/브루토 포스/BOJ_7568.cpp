#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	int x[num];
	int y[num];
	for (int i = 0; i<num; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	for (int i = 0; i<num; i++) {
		int count = 0;
		for (int j = 0; j<num; j++)
		{
			if (x[i]<x[j] && y[i]<y[j]) count++;
		}
		printf("%d ", count + 1);
	}
	return 0;
}