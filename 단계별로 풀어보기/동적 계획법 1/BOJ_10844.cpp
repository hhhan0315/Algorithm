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
	}//dp[1][i]는 1자리 수에 끝이 1~9인 수의 개수는 1개

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
	//dp[2][0] 일 경우 2자리 수 중 0이 오면 앞에 1 한개만 오기 때문에 dp[1][1]과 같은 의미
	//dp[2][9] 일 경우 2자리 수 중 9가 오면 앞에 8 한개만 오기 때문에 dp[1][8]과 같은 의미
	//dp[2][4] 일 경우 2자리 수 중 4가 오면 앞에 3, 5 두개가 올 수 있기 때문에 dp[1][3] + dp[1][5] 의 의미

	int sum = 0;
	for (int i = 0; i<10; i++)
	{
		sum = (sum + dp[n][i]) % DIV;
	}

	cout << sum;
	return 0;
}