#include <stdio.h>
int main() {
	int num;
	int k, n;
	int array[15][15] = { 0 };
	for (int i = 1; i<15; i++) {
		array[0][i] = i;
	}
	printf("%d", array[1][0]);
	for (int i = 1; i<15; i++) {
		for (int j = 1; j<15; j++) {
			array[i][j] = array[i-1][j] + array[i][j-1];
		}
	}
	printf("%d", array[1][1]);
	scanf("%d", &num);
	for(int i=0; i<num; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", array[k][n]);
	}
	return 0;
	//array 배열을 0으로 초기화해주지 않아서 계속 array[1][0]이 원하지 않은 값 출력
	//array 배열을 main 밖으로 선언해주면 array[1][0]이 0으로 출력
}