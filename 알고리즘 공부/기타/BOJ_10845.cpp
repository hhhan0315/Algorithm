#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
#define MAX_SIZE 10000
#define TRUE 1
#define FALSE 0

typedef struct queue {
	int arr[MAX_SIZE];
	int front;
	int rear;
	int size;
}queue;

void init(queue* q) {
	q->front = q->rear = -1;
	q->size = 0;
}

int is_Empty(queue* q) {
	if (q->front == q->rear)
		return TRUE;
	else
		return FALSE;
}

int is_full(queue* q) {
	int temp = (q->rear + 1) % MAX_SIZE;
	if (temp == q->front)
		return TRUE;
	else
		return FALSE;
}

void push(queue* q, int data) {
	if (!is_full(q)) {
		q->rear++;
		q->arr[q->rear] = data;
		q->size++;
	}
}

int pop(queue* q) {
	if (!is_Empty(q)) {
		q->front = (q->front + 1) % MAX_SIZE;
		q->size--;
		return q->arr[q->front];
	}
	else
		return -1;
}

int size(queue* q) {
	return q->size;
}

int front(queue* q) {
	if (!is_Empty(q)) {
		int temp = (q->front + 1) % MAX_SIZE;
		return q->arr[temp];
	}
	else
		return -1;
}

int back(queue* q) {
	if (!is_Empty(q)) {
		return q->arr[q->rear];
	}
	else
		return -1;
}

int main() {
	int N, num;
	cin >> N;
	queue q;
	init(&q);

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		if (str == "push") {
			scanf("%d", &num);
			push(&q, num);
		}
		else if (str == "pop") {
			printf("%d\n", pop(&q));
		}
		else if (str == "size") {
			printf("%d\n", size(&q));
		}
		else if (str == "empty") {
			printf("%d\n", is_Empty(&q));
		}
		else if (str == "front") {
			printf("%d\n", front(&q));
		}
		else if (str == "back") {
			printf("%d\n", back(&q));
		}
	}

	return 0;

}