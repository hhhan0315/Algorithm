#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int> > q;
    priority_queue<int> pq;

    for (int i = 0; i < priorities.size(); i++)
    {
        q.push(make_pair(i, priorities[i]));
        pq.push(priorities[i]);
    }

    int res = 0;
    while (!pq.empty())
    {
        int i = q.front().first;
        int value = q.front().second;
        q.pop();

        if (value == pq.top())
        {
            pq.pop();
            answer += 1;
            if (i == location) break;
        }
        else
        {
            q.push(make_pair(i, value));
        }
    }

    return answer;
}