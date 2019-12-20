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
	//getline : 공백포함 한줄한줄 입력받은대로 출력
	
	return 0;

	//%c : 실제 문자 받아서 출력
	//%s : 주소값을 받고 주소값 시작부터 \0나올때까지 출력
}