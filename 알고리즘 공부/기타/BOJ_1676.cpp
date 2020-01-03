#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int sum = 0;
	sum = n / 5 + n / 25 + n / 125;
	cout << sum;

	return 0;
}