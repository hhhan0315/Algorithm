#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, n;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int sum = 0;
		int average = 0;
		for (int j = 1; j <= 10; j++) {
			cin >> n;
			sum += n;
			//average = sum / 10;
			/*if (sum % 10 >= 5) {
				average++;
			}*/
		}

		cout << "#" << i << " " << round(sum / 10.0) << "\n";
	}
	return 0;
}

//round : 반올림 함수