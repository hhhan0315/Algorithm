#include <iostream>

using namespace std;

void doPlus(int& num)
{
	num += 1;
}

void doChange(int& num)
{
	num *= -1;
}

int main()
{
	int a = 2;
	doPlus(a);
	cout << a << endl;

	doChange(a);
	cout << a << endl;
	
	return 0;
}