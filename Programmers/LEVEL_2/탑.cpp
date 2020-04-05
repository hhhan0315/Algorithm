#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    int size = heights.size();

    for (int i = size - 1; i >= 0; i--)
    {
        bool flag = true;
        for (int j = i - 1; j >= 0; j--)
        {
            if (heights[i] < heights[j])
            {
                answer.push_back(j + 1);
                flag = false;
                break;
            }
        }
        if (flag == true)
            answer.push_back(0);
    }
    reverse(answer.begin(), answer.end());

    return answer;
}