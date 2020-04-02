#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);

    for (int i = 0; i < n; i++)
    {
        vector<int> v1(n, 0);
        vector<int> v2(n, 0);

        int num1 = arr1[i];
        int num2 = arr2[i];
        int index1 = 0;
        int index2 = 0;

        while (num1 > 0)
        {
            int temp = num1 % 2;
            v1[index1++] = temp;
            num1 /= 2;
        }

        while (num2 > 0)
        {
            int temp = num2 % 2;
            v2[index2++] = temp;
            num2 /= 2;
        }

        vector<int> res;
        for (int j = 0; j < n; j++)
        {
            if (v1[j] == 0 && v2[j] == 0)
            {
                res.push_back(0);
            }
            else
                res.push_back(1);
        }
        for (int j = 0; j < n; j++)
            cout << res[j];
        cout << " ";

        for (int j = n - 1; j >= 0; j--)
        {
            if (res[j] == 1)
                answer[i] += "#";
            else
                answer[i] += " ";
        }

    }

    return answer;
}