#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr1[i] | arr2[i];    // | : ��Ʈ������ OR
        string res = "";
        //cout << arr1[i] << endl;

        for (int j = 0; j < n; j++)
        {
            if (arr1[i] % 2 == 0) res += " ";
            else res += "#";
            // arr1[i]=arr1[i]>>1;
            arr1[i] /= 2;
        }
        reverse(res.begin(), res.end());    // Ȯ���غ��� �������� �����̵Ǽ� reverse���ش�.
        answer.push_back(res);
    }
    // ��Ʈ�������� ���信 ���� �� �����ص���.

    return answer;
}