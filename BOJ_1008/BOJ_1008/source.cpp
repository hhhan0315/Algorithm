#include <stdio.h>
int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.9lf\n", a / b);
	return 0;
	//소수점 이하 9자리까지이기 때문에 소수점이하 6자리인 float 말고 double을 사용해주었다. 
	//float -> f   double -> lf   9자리 출력 -> .9lf
}