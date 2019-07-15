#include <stdio.h>
int main() {
	int num, tmp, sum, n, flag = 0;
	scanf("%d", &num);
	for (int i = 0; i<num; i++) {
		sum = i;
		tmp = i;
		while (tmp>0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == num) {
			printf("%d", i);
			flag = 1;
			break;
		}
	}
	if(flag==0)printf("0");
	return 0;
}
//처음에 규칙을 3글자 기준으로만 작성해서 오류 발생