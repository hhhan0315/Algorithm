#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct person {
	int age;
	string name;
};

bool compare(const person &a, const person &b) {
	return a.age < b.age;
}

int main() {
	int n;
	cin >> n;
	vector <person> p(n);
	for (int i = 0; i<n; i++) {
		cin >> p[i].age;
		cin >> p[i].name;
	}

	stable_sort(p.begin(), p.end(), compare);

	for (int i = 0; i<n; i++) {
		cout << p[i].age << " " << p[i].name << "\n";
	}
	//endl을 쓰면 시간초과

	return 0;
}