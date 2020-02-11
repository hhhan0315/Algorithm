#include <iostream>
int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

int main()
{
	using namespace std;
	
	cout << SimpleFunc(10) << endl;
	cout << SimpleFunc() << endl;
	//  인자를 전달하지 않는 경우 중복 오류 발생

	return 0;
}