#include <stdio.h>
int main() {
	int array[4];
	int min = 0;
	scanf("%d %d %d %d", &array[0], &array[1], &array[2], &array[3]);
	array[2] = array[2] - array[0];
	array[3] = array[3] - array[1];

	min = array[0];

	for (int i = 0; i<4; i++) {
		if (min > array[i]) min = array[i];
	}
	printf("%d", min);
	return 0;
	//거리가 원점 (0,0)으로부터 거리가 더 짧을 수도 있다는 것을 생각하지 못해서 오류 발생
}