#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	string str;
	for (int tc = 1; tc <= T; tc++) {
		cin >> str;
		int i = 0;
		for (int j = 1; j < str.length(); j++) {
			if (str[i] == str[j]) {
				i++;
			}
			else {
				i = 0;
			}
		}
		int result = str.length() - i;
		cout << "#" << tc << " " << result << endl;
		
	}
}