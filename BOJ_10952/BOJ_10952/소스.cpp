#include <stdio.h>
int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		if ((a == 0) && (b == 0)) break;
		else printf("%d\n", a + b);
	}
	return 0;
	//EOF = end of file 읽어들인 문자가 파일의 끝을 나타내는 기호가 아니면 루프를 돈다.
}