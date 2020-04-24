#include <string>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

bool isPrime(int num) {
    bool flag = true;
    if (num == 0 || num == 1) return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int solution(string numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end(), greater<int>());
    int max_num = stoi(numbers);
    vector<int> prime(max_num + 1);
    vector<bool> visited(max_num + 1);

    for (int i = 0; i <= max_num; i++)
    {
        prime[i] = isPrime(i);
    }

    sort(numbers.begin(), numbers.end());
    set<int> s;
    do {
        for (int i = 1; i <= numbers.size(); i++)
        {
            string temp = numbers.substr(0, i);
            if (prime[stoi(temp)]) {
                s.insert(stoi(temp));
            }
        }

    } while (next_permutation(numbers.begin(), numbers.end()));

    answer = s.size();

    return answer;
}