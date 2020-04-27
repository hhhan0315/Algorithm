#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int stu1[5] = { 1,2,3,4,5 };
int stu2[8] = { 2,1,2,3,2,4,2,5 };
int stu3[10] = { 3,3,1,1,2,2,4,4,5,5 };

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int score[3] = { 0, };
	for (int i = 0; i < answers.size(); i++)
	{
		int temp = answers[i];
		if (stu1[i % 5] == temp) score[0]++;
		if (stu2[i % 8] == temp) score[1]++;
		if (stu3[i % 10] == temp) score[2]++;
	}

	int max_score = max(max(score[0], score[1]), score[2]);
	for (int i = 0; i < 3; i++)
	{
		if (score[i] == max_score)
			answer.push_back(i + 1);
	}

	//     int max=-1, max_index;

	//     for(int i=0; i<3; i++)
	//     {
	//         if(arr[i]>max)
	//         {
	//             max=arr[i];
	//             answer.clear();
	//             answer.push_back(i+1);
	//         }
	//         else if(arr[i]==max)
	//         {
	//             answer.push_back(i+1);
	//         }
	//     }

	return answer;
}