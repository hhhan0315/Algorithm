#include <iostream>
#include <string>
using namespace std;


int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;

	string temp1 = a + b;
	string temp2 = c + d;

	long long result1 = stoll(temp1);
	long long result2 = stoll(temp2);

	cout << result1 + result2;

	return 0;
}