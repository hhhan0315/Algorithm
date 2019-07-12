#include <stdio.h>
int main() {
	int num, n, count = 0;
	int array[1001] = { 0,1 };

	scanf("%d", &num);

	for (int i = 0; i<num; i++) {
		scanf("%d", &n);
		for (int i = 2; i <= n; i++) {
			for (int j = 2; i*j <= n; j++) {
				array[i*j] = 1;
			}
		}
		if (array[n] != 1) count++;
	}
	printf("%d", count);
	return 0;
	//for문 array[i*j]=1; 을 밖에 있었을 때는 범위가 벗어나는 것은 다 1로 표시되어
	//틀렸었는데 for문 안에 만들어주니 해결되었다. 범위 넘어가면 debug 발생
}