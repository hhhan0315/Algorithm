#include <iostream>

using namespace std;

int main()
{
	const int num = 12;
	const int* ptr = &num;
	const int *(&ref) = ptr;

	cout << *ref << endl;
	cout << *ptr << endl;

	return 0;
}