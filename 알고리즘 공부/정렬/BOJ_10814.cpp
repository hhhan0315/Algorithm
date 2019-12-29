#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector <pair<int, string> > v;

bool compare(pair<int, string> a, pair<int, string> b) {
	if (a.first < b.first) {
		return true;
	}
	else if (a.first == b.first) {
		return false;
		//if same, don't move
	}
	return false;
}

int main() {
	int N;
	cin >> N;
	int age;
	string name;

	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		v.push_back({ age, name });
	}
	stable_sort(v.begin(), v.end(), compare);
	//sort: if(a.first==b.first) move
	//stable_sort : don't move

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}