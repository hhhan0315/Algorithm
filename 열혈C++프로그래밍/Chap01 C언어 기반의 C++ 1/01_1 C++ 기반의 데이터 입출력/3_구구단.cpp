#include <iostream>

int main()
{
	using namespace std;
	int input;
	cin >> input;

	for (int i = 0; i < 9; i++)
	{
		cout << input << " * " << i + 1 << " = " << input * (i + 1) << endl;
	}

	return 0;
}