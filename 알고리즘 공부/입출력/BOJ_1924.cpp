#include <iostream>
#include <string>
using namespace std;

int main() {
	int month, day;

	int cal[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string result[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	cin >> month >> day;
	
	int day_sum = 0;
	for (int i = 0; i < month-1; i++) {
		day_sum += cal[i];
	}
	day_sum += day;
	day_sum %= 7;

	cout << result[day_sum];

	return 0;
}