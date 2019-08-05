#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string s1, string s2) {
	if (s1.size() == s2.size()) {
		return s1<s2;
	}
	else {
		return s1.size()<s2.size();
	}
}

int main() {
	int n;
	string temp;
	cin >> n;
	vector<string> s;

	for (int i = 0; i<n; i++) {
		string word;
		cin >> word;
		s.push_back(word);
	}

	sort(s.begin(), s.end(), compare);

	//위에 sort로 compare 함수로 이용해서 정렬을 해주었는데 temp==s[i] 즉 중복이면 넘어가라는 뜻
	for (int i = 0; i<n; i++) {
		if (temp == s[i]) continue; 
		cout << s[i] << "\n";
		temp = s[i];
	}
	return 0;
}

//<<와 >> 연산자가 string에 알맞지 않다고 해서 #incldue <string.h>로 해결 가능
