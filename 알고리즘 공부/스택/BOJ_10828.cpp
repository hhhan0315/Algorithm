#include <iostream>
#include <string>
using namespace std;
#define MAX_SIZE 10000
#define TRUE 1
#define FALSE 0

typedef struct stack {
	int arr[MAX_SIZE];
	int top;
}stack;

void init_stack(stack* s) {
	s->top = -1;
}

int is_full(stack* s) {
	if (s->top == MAX_SIZE)
		return TRUE;
	else
		return FALSE;
}

int is_Empty(stack* s) {
	if (s->top == -1)
		return TRUE;
	else
		return FALSE;
}

void push(stack* s, int data) {
	if (!is_full(s)) {
		s->top++;
		s->arr[s->top] = data;
	}
}

int pop(stack* s) {
	if (!is_Empty(s)) {
		return s->arr[(s->top)--];
	}
	else
		return -1;
}

int size(stack* s) {
	return (s->top) + 1;
}

int top(stack* s) {
	if (!is_Empty(s)) {
		return s->arr[s->top];
	}
	else
		return -1;

}

int main() {
	int N;
	cin >> N;

	string str;
	stack stack;
	int num;
	init_stack(&stack);

	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> num;
			push(&stack, num);
		}
		else if (str == "pop") {
			cout << pop(&stack) << "\n";
		}
		else if (str == "size") {
			cout << size(&stack) << "\n";
		}
		else if (str == "empty") {
			cout << is_Empty(&stack) << "\n";
		}
		else if (str == "top") {
			cout << top(&stack) << "\n";
		}
	}
	return 0;
}