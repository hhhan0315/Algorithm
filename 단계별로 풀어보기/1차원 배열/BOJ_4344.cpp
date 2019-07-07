#include <stdio.h>
int main() {
	int number_test;
	int number_stu;
	int score[1000];
	int sum = 0;
	int test = 0;
	int count = 0;
	double average[1000];
	scanf("%d", &number_test);
	for (int i = 0; i<number_test; i++) {
		scanf("%d", &number_stu);
		for (int j = 0; j<number_stu; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		test = sum / number_stu;
		for (int k = 0; k<number_stu; k++) {
			if (score[k]>test) count++;
		}
		average[i] = ((double)count / (double)number_stu) * 100;
		sum = 0;
		test = 0;
		count = 0;

	}
	for (int i = 0; i<number_test; i++) {
		printf("%.3lf%%\n", average[i]);
	}

	return 0;
}