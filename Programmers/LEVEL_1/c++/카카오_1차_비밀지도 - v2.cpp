#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr1[i] | arr2[i];    // | : 비트연산자 OR
        string res = "";
        //cout << arr1[i] << endl;

        for (int j = 0; j < n; j++)
        {
            if (arr1[i] % 2 == 0) res += " ";
            else res += "#";
            // arr1[i]=arr1[i]>>1;
            arr1[i] /= 2;
        }
        reverse(res.begin(), res.end());    // 확인해보면 역순으로 저장이되서 reverse해준다.
        answer.push_back(res);
    }
    // 비트연산자의 개념에 대해 잘 생각해두자.

    return answer;
}