#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;
    double size = arr.size();
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    answer = sum / size;
    return answer;
}