#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	char t;
	string a;

	/*
	while (scanf("%c", &t) != EOF) {
		printf("%c\n", t);
	}*/

	
	while (1) {
		getline(cin, a);
		if (a == "") break;
		cout << a << endl;
	}
	//getline : �������� �������� �Է¹������ ���
	
	return 0;

	//%c : ���� ���� �޾Ƽ� ���
	//%s : �ּҰ��� �ް� �ּҰ� ���ۺ��� \0���ö����� ���
}