#include <iostream>
using namespace std;

int money(int num)
{
	return 50 + num * 0.12;
}

int main()
{
	while (1)
	{
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		int input = 0;
		cin >> input;

		if (input == -1) break;

		cout << "이번 달 급여: " << money(input) << "만원" << endl;
	}
	cout << "프로그램을 종료합니다." << endl;

	return 0;
}