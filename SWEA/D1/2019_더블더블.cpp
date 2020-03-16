#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int result = 1;
	for (int i = 0; i <= n; i++) {
		cout << result << " ";
		result = result * 2;	
	}

	return 0;
}