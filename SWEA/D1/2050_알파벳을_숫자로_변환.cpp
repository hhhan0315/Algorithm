#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		cout << s.at(i) - 'A' + 1 << " ";
	}

	//s.at(0)�� ���ڿ� ��ü�� ù��° ���� 
}