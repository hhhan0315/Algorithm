#include <iostream>
#include <cstdio>
#include <string.h>
#include <string>
using namespace std;

int main() {
	/*
	char c[100];
	scanf("%s", &c);

	for (int i = 0; i < strlen(c); i++) {
		printf("%c", c[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}
	*/

	string str;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		cout << str[i];
		if ((i + 1) % 10 == 0)
			cout << "\n";
	}

	return 0;
}