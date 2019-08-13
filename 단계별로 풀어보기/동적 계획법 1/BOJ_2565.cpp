#include <iostream>
using namespace std;

int arr[501];
int dp[501];

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a] = b;
	}

	int max = 0;
	for (int i = 1; i <= 500; i++)
	{
		if (arr[i] == 0) continue;
		dp[i] = 1;
		for (int j = 1; j<i; j++)
		{
			if (arr[i]>arr[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		}
		if (max < dp[i])
			max = dp[i];
	}

	cout << N - max;

}
//continue�� �ۼ������� �ʾƼ� ���� �߻�
//�����ϴ� �������� Ǯ�� ��ư� �ϳ��� �߰����ָ鼭 �ϴ� �������� �����ؾ���