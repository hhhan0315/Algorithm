#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int temp = arr.front();
    answer.push_back(temp);
    for (int i = 1; i < arr.size(); i++)
    {
        if (temp == arr[i])
        {
            continue;
        }
        else
        {
            temp = arr[i];
            answer.push_back(temp);
        }
    }

    return answer;
}