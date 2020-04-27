#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int pos = 0;
    int arr_pos = 0;
    int arr[3] = { 0 };

    for (int i = 0; i < dartResult.size(); i++)
    {
        if (dartResult[i] == 'S')
        {
            string temp = "";
            for (int j = pos; j < i; j++)
            {
                temp += dartResult[j];
            }
            int n = stoi(temp);
            n = pow(n, 1);
            arr[arr_pos++] = n;
            pos = i + 1;
        }
        else if (dartResult[i] == 'D')
        {
            string temp = "";
            for (int j = pos; j < i; j++)
            {
                temp += dartResult[j];
            }
            int n = stoi(temp);
            n = pow(n, 2);
            arr[arr_pos++] = n;
            pos = i + 1;
        }
        else if (dartResult[i] == 'T')
        {
            string temp = "";
            for (int j = pos; j < i; j++)
            {
                temp += dartResult[j];
            }
            int n = stoi(temp);
            n = pow(n, 3);
            arr[arr_pos++] = n;
            pos = i + 1;
        }
        else if (dartResult[i] == '*')
        {
            for (int j = arr_pos - 2; j < arr_pos; j++)
            {
                arr[j] = arr[j] * 2;
            }
            pos = i + 1;
        }
        else if (dartResult[i] == '#')
        {
            arr[arr_pos - 1] = arr[arr_pos - 1] * -1;
            pos = i + 1;
        }
        else continue;
    }

    for (int i = 0; i < arr_pos; i++)
    {
        answer += arr[i];
    }

    return answer;
}