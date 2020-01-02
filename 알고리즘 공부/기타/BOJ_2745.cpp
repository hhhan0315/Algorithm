#include <iostream>
#include <string>
using namespace std;

int main() {
	string N;
	int B;
	cin >> N >> B;
	
	int num = 1;
	int sum = 0;
	int temp;

	for (int i = N.length() - 1; i >= 0; i--) {

		if (N[i] >= 'A') {
			N[i] = N[i] + 10 - 'A';
			temp = N[i] * num;
			sum += temp;
			num *= B;
		}
		else {
			//ascii : char - '0' = number
			N[i] = N[i] -'0';
			temp = N[i] * num;
			sum += temp;
			num *= B;
		}
	}

	cout << sum;

	return 0;
}