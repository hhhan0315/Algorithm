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

	//floor : �����Լ� ���� �� 0.5 ���ϰ� �ݿø� ����
	//ceil : �ø��Լ�
	cout << (int)floor((sum / N) + 0.5) << "\n";

	//�߾Ӱ� : sort�� �������� ���� �� �ݿø����� ��ġ �Ǵ� ����
	sort(arr, arr + N);
	int mid = floor(N / 2 + 0.5);
	cout << arr[mid] << "\n";

	//�ֺ�
	//vector ���� �� ���ǿ� �´� ���� �־��־��� v.clear()�� ������ �ʾƼ� ������ ������.
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


	//����
	int max = arr[N-1] - arr[0];
	cout << max << "\n";
}