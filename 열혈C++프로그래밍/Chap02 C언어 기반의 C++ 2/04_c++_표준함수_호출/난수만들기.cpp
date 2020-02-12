#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));	// 호출할 때 전달받는 인자를 기반으로 초기화
	// rand()는 srand로 인해 생성된 값을 바탕으로 난수 생성
	for (int i = 0; i < 5; ++i)
	{
		int num = rand()%100;	// 0~99
		cout << num << endl;
	}

	return 0;
}