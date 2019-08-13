#include <iostream>
using namespace std;
#define MAX_SIZE 1001

int Arr[MAX_SIZE];
int DP[MAX_SIZE];
int R_DP[MAX_SIZE];

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> Arr[i];
	}

	for (int i = 1; i <= N; i++)
	{
		DP[i] = 1;
		for (int j = 1; j<i; j++)
		{
			if (Arr[j] < Arr[i] && DP[i] < DP[j] + 1)
				DP[i] = DP[j] + 1;
		}
	}

	for (int i = N; i >= 1; i--)
	{
		R_DP[i] = 1;
		for (int j = N; j>i; j--)
		{
			if (Arr[j] < Arr[i] && R_DP[i] < R_DP[j] + 1)
				R_DP[i] = R_DP[j] + 1;
		}
	}

	int MAX = 0;
	for (int i = 1; i <= N; i++)
	{
		if (MAX < DP[i] + R_DP[i])
			MAX = DP[i] + R_DP[i];
	}

	cout << MAX - 1;
}