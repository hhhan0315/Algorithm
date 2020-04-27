#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> temp;

    int max = 0;
    for (int i = 0; i < progresses.size(); i++)
    {
        int quo = (100 - progresses[i]) / speeds[i];
        int remain = (100 - progresses[i]) % speeds[i];

        if (remain != 0) quo++;

        temp.push_back(quo);

        if (max < quo)
        {
            answer.push_back(1);
            max = quo;
        }
        else
        {
            int temp = answer.back();
            answer.pop_back();
            answer.push_back(temp + 1);
        }
    }

    return answer;
}