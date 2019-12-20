#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (scanf_s("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
	//EOF : End Of File
	/*
	while (cin >> a >> b) {
		cout << a + b << endl;
	}
	*/
	return 0;
}