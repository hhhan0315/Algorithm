#include <stdio.h>
#include <string.h>

int main() {
	char array[1000000];
	int count = 0;
	int length = 0;
	//scanf는 공백을 저장할 수 없다.
	gets_s(array);
	length = strlen(array);
	for (int i = 0; i<length; i++) {
		if (array[i] == ' ') count++;
	}
	if (array[0] == ' ') count--;
	if (array[length - 1] == ' ') count--;
	printf("%d", count + 1);
	return 0;
}