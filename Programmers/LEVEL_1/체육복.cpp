#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int stu[30];
    for (int i = 0; i < n; i++)
        stu[i] = 1;

    for (int i = 0; i < lost.size(); i++)
    {
        stu[lost[i] - 1]--;
    }

    for (int i = 0; i < reserve.size(); i++)
    {
        stu[reserve[i] - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (stu[i] == 0)
        {
            if (stu[i + 1] == 2)
            {
                stu[i + 1]--;
                stu[i]++;
            }
            else if (stu[i - 1] == 2)
            {
                stu[i - 1]--;
                stu[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (stu[i] != 0) answer++;
    }

    return answer;
}