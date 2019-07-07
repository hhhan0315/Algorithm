#include <stdio.h>
int main() {
	int hour, minute;
	scanf("%d %d", &hour, &minute);
	int a = 45;
	if (minute < a) {
		minute += 60;
		hour--;
		if (hour<0) hour = 23;
	}
	printf("%d %d", hour, minute - a);
	return 0;
}