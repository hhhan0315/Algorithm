#include <iostream>
using namespace std;

int N;
//int ���� : 2,147,438,647
int arr[1000000];
int temp;
long long sum;

int main() {
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> N;

		for (int j = 0; j < N; j++) {
			cin >> arr[j];
		}

		temp = arr[N - 1];
		sum = 0;

		for (int j = N - 1; j >= 0; j--) {
			if (arr[j] > temp) {
				temp = arr[j];
			}
			else {
				sum = sum + temp - arr[j];
			}
		}
		
		cout << "#" << i << " " << sum << endl;
	}
	return 0;
}
//ó���� ��� ó������ �ؼ� ����� �Ϸ��� �ؼ� ������ �߻��߰�
//�ڿ������� �������� �� �ذ��� �� �־���.