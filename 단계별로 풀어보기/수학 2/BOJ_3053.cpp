#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
#define PI 3.14159265358979

int main() {
	int num;
	scanf("%d", &num);
	printf("%f\n", num*num*PI);
	printf("%f\n", num*num*2.0);
	return 0;
}
//math.h�� ��� ���Ͽ� �����ִ� PI ���� �ҷ����� �� Ʋ�ȴٰ� �߻�
//2�� �Է��ϸ� int���̶� 0 ��� -> (float)2�� �����߻� -> 2.0�Է� 