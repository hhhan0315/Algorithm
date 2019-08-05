#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int arr[500001];
int mode[8001];

int main() {
	int N;
	cin >> N;

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		mode[arr[i]+4000]++;
		sum += arr[i];
	}

	//floor : 내림함수 선언 후 0.5 더하고 반올림 구현
	//ceil : 올림함수
	cout << (int)floor((sum / N) + 0.5) << "\n";

	//중앙값 : sort로 오름차순 구현 후 반올림으로 위치 판단 구현
	sort(arr, arr + N);
	int mid = floor(N / 2 + 0.5);
	cout << arr[mid] << "\n";

	//최빈값
	//vector 생성 후 조건에 맞는 값을 넣어주었고 v.clear()를 해주지 않아서 오류가 났었다.
	int mode_max=0;
	int mode_num=0;
	vector <int> v;
	for (int i = 0; i <= 8000; i++)
	{
		if (mode_max < mode[i])
		{
			mode_max = mode[i];
			mode_num = i;
			v.clear();
			v.push_back(mode_num);
		}
		else if (mode_max == mode[i])
		{
			v.push_back(i);
		}
	}
	sort(v.begin(), v.end());

	if (v.size() == 1)
		cout << v[0] - 4000<< "\n";
	else
		cout << v[1] - 4000<< "\n";


	//범위
	int max = arr[N-1] - arr[0];
	cout << max << "\n";
}