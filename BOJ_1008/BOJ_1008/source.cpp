#include <stdio.h>
int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.9lf\n", a / b);
	return 0;
	//�Ҽ��� ���� 9�ڸ������̱� ������ �Ҽ������� 6�ڸ��� float ���� double�� ������־���. 
	//float -> f   double -> lf   9�ڸ� ��� -> .9lf
}