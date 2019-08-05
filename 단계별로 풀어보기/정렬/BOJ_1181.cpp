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

	//���� sort�� compare �Լ��� �̿��ؼ� ������ ���־��µ� temp==s[i] �� �ߺ��̸� �Ѿ��� ��
	for (int i = 0; i<n; i++) {
		if (temp == s[i]) continue; 
		cout << s[i] << "\n";
		temp = s[i];
	}
	return 0;
}

//<<�� >> �����ڰ� string�� �˸��� �ʴٰ� �ؼ� #incldue <string.h>�� �ذ� ����
