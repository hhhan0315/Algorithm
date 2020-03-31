#include <string>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int size = arr.size();
    int check = INT_MAX;
    int index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < check)
        {
            check = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == check)
            continue;
        else
            answer.push_back(arr[i]);
    }

    if (answer.empty())
    {
        answer.push_back(-1);
    }
    return answer;
}