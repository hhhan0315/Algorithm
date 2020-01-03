#include <iostream>
#include <string>
using namespace std;

string check[8] = { "000","001","010","011","100","101","110","111" };
string f_check[8] = { "","1","10","11","100","101","110","111" };

int main() {
	string str;
	cin >> str;
	
	if (str == "0") {
		cout << str;
		return 0;
	}
	
	int len = str.length();

	cout << f_check[str[0] - '0'];

	for (int i = 1; i < len; i++) {
		int num = str[i] - '0';
		cout << check[num];
	}

	return 0;
}