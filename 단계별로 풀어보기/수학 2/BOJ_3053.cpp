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
//math.h로 헤더 파일에 적혀있는 PI 값을 불러왔을 때 틀렸다고 발생
//2로 입력하면 int형이라 0 출력 -> (float)2도 오류발생 -> 2.0입력 