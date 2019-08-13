#include <iostream>
using namespace std;
#define DIV 1000000000

int dp[101][10];

int main() {
	int n;
	cin >> n;

	for (int i = 1; i<10; i++)
	{
		dp[1][i] = 1;
	}//dp[1][i]�� 1�ڸ� ���� ���� 1~9�� ���� ������ 1��

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j<10; j++)
		{
			if (j == 0)
				dp[i][0] = dp[i - 1][1] % DIV;
			else if (j == 9)
				dp[i][9] = dp[i - 1][8] % DIV;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % DIV;
		}
	}
	//dp[2][0] �� ��� 2�ڸ� �� �� 0�� ���� �տ� 1 �Ѱ��� ���� ������ dp[1][1]�� ���� �ǹ�
	//dp[2][9] �� ��� 2�ڸ� �� �� 9�� ���� �տ� 8 �Ѱ��� ���� ������ dp[1][8]�� ���� �ǹ�
	//dp[2][4] �� ��� 2�ڸ� �� �� 4�� ���� �տ� 3, 5 �ΰ��� �� �� �ֱ� ������ dp[1][3] + dp[1][5] �� �ǹ�

	int sum = 0;
	for (int i = 0; i<10; i++)
	{
		sum = (sum + dp[n][i]) % DIV;
	}

	cout << sum;
	return 0;
}