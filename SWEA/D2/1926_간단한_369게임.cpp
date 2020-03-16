#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int temp;
	int flag;

	for (int i = 1; i <= N; i++) {
		temp = i;
		flag = 0;

		while (temp) {
			if (temp % 10 == 3 || temp % 10 == 6 || temp % 10 == 9) {
				flag = 1;
				cout << "-";
			}
			temp /= 10;
		}

		if (flag == 0) {
			cout << i << " ";
		}
		else {
			cout << " ";
		}
	}
	return 0;
}
//temp%10을 먼저 계산하고 그 후에 temp/=10을 해주는 것이 해결방법이었다.