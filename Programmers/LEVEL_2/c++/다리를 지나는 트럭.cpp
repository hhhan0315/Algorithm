#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> q;
    int now_weight = 0;

    for (int i = 0; i < truck_weights.size(); i++)
    {
        int temp = truck_weights[i];
        while (true)
        {
            if (q.empty())
            {
                q.push(temp);
                answer++;
                now_weight += temp;
                break;
            }
            else if (q.size() == bridge_length)
            {
                now_weight -= q.front();
                q.pop();
            }
            else
            {
                if (now_weight + temp > weight)
                {
                    q.push(0);
                    answer++;
                }
                else
                {
                    q.push(temp);
                    answer++;
                    now_weight += temp;
                    break;
                }
            }
        }
    }
    answer += bridge_length;
    return answer;
}