#include <stdio.h>
#define MAX 100001
int x[MAX];
int y[MAX];
int xsort[MAX];
int ysort[MAX];

void merge(int left, int mid, int right) {
	int i, j, k, l;
	i = left; j = mid + 1; k = left;

	//반으로 나눈 배열을 비교해서 입력
	while (i <= mid && j <= right) {
		if (x[i] < x[j])
		{
			xsort[k] = x[i];
			ysort[k++] = y[i++];
		}
		else if (x[i] == x[j])
		{
			if (y[i] <= y[j])
			{
				xsort[k] = x[i];
				ysort[k++] = y[i++];
			}
			else
			{
				xsort[k] = x[j];
				ysort[k++] = y[j++];
			}
		}
		else
		{
			xsort[k] = x[j];
			ysort[k++] = y[j++];
		}
	}

	//남은 레코드 복사
	if (i>mid) {
		for (l = j; l <= right; l++) {
			xsort[k] = x[l];
			ysort[k++] = y[l];
		}
	}
	else {
		for (l = i; l <= mid; l++) {
			xsort[k] = x[l];
			ysort[k++] = y[l];
		}
	}

	//arr로 재복사
	for (l = left; l <= right; l++) {
		x[l] = xsort[l];
		y[l] = ysort[l];
	}
}

void merge_sort(int left, int right) {
	int mid;
	if (left<right) {
		mid = (left + right) / 2;
		merge_sort(left, mid);
		merge_sort(mid + 1, right);
		merge(left, mid, right);
	}
}

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i<num; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	merge_sort(0, num - 1);
	for (int i = 0; i<num; i++) {
		printf("%d %d\n", xsort[i], ysort[i]);
	}
	return 0;

}