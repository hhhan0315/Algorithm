#include <iostream>
#include <string>
using namespace std;

int arr[26];

int main() {
	string str;
	cin >> str;

	char c;
	for (int i = 0; i < str.length(); i++) {
		c = str[i];
		arr[c - 'a']++;
	}

	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";

	return 0;
}