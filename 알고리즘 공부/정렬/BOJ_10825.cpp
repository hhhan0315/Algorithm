#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define MAX_SIZE 100000

/*
pair<pair<string, int>, pair<int, int > > student[MAX_SIZE];

bool compare(pair<pair<string, int>, pair<int, int > > a,
	pair<pair<string, int>, pair<int, int > > b) {
	if (a.first.second > b.first.second) {
		return true;
	}
	else if (a.first.second == b.first.second) {
		if (a.second.first < b.second.first)
			return true;
		else if (a.second.first == b.second.first) {
			if (a.second.second > b.second.second)
				return true;
			else if (a.second.second == b.second.second) {
				if (a.first.first < b.first.first)
					return true;
			}
		}
	}
	return false;
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> student[i].first.first >> student[i].first.second >>
			student[i].second.first >> student[i].second.second;
	}

	sort(student, student+N, compare);

	for (int i = 0; i < N; i++)
		cout << student[i].first.first << "\n";


	return 0;
}
*/

typedef struct student {
	string name;
	int korean;
	int english;
	int math;
}student;

student s[MAX_SIZE];

bool compare(student a, student b) {
	if (a.korean > b.korean) {
		return true;
	}
	else if (a.korean == b.korean) {
		if (a.english < b.english) {
			return true;
		}
		else if (a.english == b.english) {
			if (a.math > b.math) {
				return true;
			}
			else if (a.math == b.math) {
				if (a.name < b.name) {
					return true;
				}
			}
		}
	}

	return false;
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s[i].name >> s[i].korean >> s[i].english >> s[i].math;
	}

	sort(s, s + N, compare);

	for (int i = 0; i < N; i++)
		cout << s[i].name << "\n";

	return 0;
}