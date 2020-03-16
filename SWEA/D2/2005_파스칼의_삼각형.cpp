#include <iostream>
using namespace std;

int main() {
	int T, N;
	cin >> T;

	int arr[11][11] = { 0 };

	for (int tc = 1; tc <= T; tc++) {
		cin >> N;
		arr[0][0] = 1;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= i; j++) {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
		cout << "#" << tc << endl;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if(arr[i][j]!=0)
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

}