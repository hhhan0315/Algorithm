#include <iostream>
#include <cstdio>
using namespace std;
int arr[10001];
int selfnumber(int n) {
	int sum = n;
	while (1)
	{
		if (n == 0) break;
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int main() {
	for (int i = 1; i<10001; i++)
	{
		int num = selfnumber(i);
		if (num <= 10001)
			arr[num] = true;
	}

	for (int i = 1; i<10001; i++)
	{
		if (arr[i] == false) printf("%d\n", i);
	}
}