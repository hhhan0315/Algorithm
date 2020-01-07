#include <iostream>
using namespace std;

typedef struct tree {
	char left;
	char right;
}tree;

tree arr[27];

void preorder(char root) {
	if (root == '.') return;
	cout << root;
	preorder(arr[root].left);
	preorder(arr[root].right);
}

void inorder(char root) {
	if (root == '.') return;
	inorder(arr[root].left);
	cout << root;
	inorder(arr[root].right);
}

void postorder(char root) {
	if (root == '.') return;
	postorder(arr[root].left);
	postorder(arr[root].right);
	cout << root;
}

int main() {
	int N;
	cin >> N;

	char c1, c2, c3;
	for (int i = 0; i < N; i++) {
		cin >> c1 >> c2 >> c3;
		arr[c1].left = c2;
		arr[c1].right = c3;
	}

	preorder('A');
	cout << "\n";
	inorder('A');
	cout << "\n";
	postorder('A');

	return 0;
}