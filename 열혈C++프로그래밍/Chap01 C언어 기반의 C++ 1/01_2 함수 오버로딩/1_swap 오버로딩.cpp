#include <iostream>

void swap(int* num1, int* num2)
{
	int temp = *num2;
	*num2 = *num1;
	*num1 = temp;
}

void swap(char* ch1, char* ch2)
{
	int temp = *ch2;
	*ch2 = *ch1;
	*ch1 = temp;
}

void swap(double* dbl1, double* dbl2)
{
	double temp = *dbl2;
	*dbl2 = *dbl1;
	*dbl1 = temp;
}

int main()
{
	using namespace std;
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;

	return 0;
}