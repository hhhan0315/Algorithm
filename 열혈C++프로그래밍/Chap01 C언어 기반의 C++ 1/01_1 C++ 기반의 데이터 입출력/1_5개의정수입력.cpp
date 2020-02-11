#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int input;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 정수 입력 : ";
		cin >> input;
		sum += input;
	}
	cout << "합계: " << sum << endl;

	return 0;
}