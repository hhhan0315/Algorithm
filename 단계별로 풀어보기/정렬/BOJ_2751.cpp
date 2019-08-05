#include <stdio.h>
int arr[1000000];
int sort[1000000];

void merge(int left, int mid, int right) {
	int i, j, k, l;
	i = left; j = mid + 1; k = left;

	//반으로 나눈 배열을 비교해서 입력
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j])
			sort[k++] = arr[i++];
		else
			sort[k++] = arr[j++];
	}

	//남은 레코드 복사
	if (i>mid) {
		for (l = j; l <= right; l++)
			sort[k++] = arr[l];
	}
	else
		for (l = i; l <= mid; l++)
			sort[k++] = arr[l];

	//arr로 재복사
	for (l = left; l <= right; l++)
		arr[l] = sort[l];
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
		scanf("%d", &arr[i]);
	}
	merge_sort(0, num - 1);
	for (int i = 0; i<num; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;

}