#include <iostream>
#include <string>
using namespace std;

int arr[4];

void init(int arr[]) {
	arr[0] = arr[1] = arr[2] = arr[3] = 0;
}

int main() {
	while(1){
		string str;
		getline(cin, str);

		if (str == "") break;

		char c;
		init(arr);
		for (int i = 0; i < str.length(); i++) {
			c = str[i];

			if (c >= 'a' && c <= 'z') {
				arr[0]++;
			}
			else if (c >= 'A' && c <= 'Z') {
				arr[1]++;
			}
			else if (c >= '0' && c <= '9') {
				arr[2]++;
			}
			else {
				arr[3]++;
			}
		}

		for (int i = 0; i < 4; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}