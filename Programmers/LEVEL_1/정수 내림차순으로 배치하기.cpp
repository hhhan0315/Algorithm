#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

long long solution(long long n) {
    long long answer = 0;
    vector<int> v;
    int size = -1;

    while (n > 0)
    {
        int temp = n % 10;
        n /= 10;
        v.push_back(temp);
        size++;
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++)
    {
        answer += v[i] * pow(10, size);
        size--;
    }

    return answer;
}