#include <cstdio>

void star(int n, int i, int j) {
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1)
		printf(" ");
	else
	{
		if (n / 3 == 0)
			printf("*");
		else
			star(n / 3, i, j);
	}

}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			star(n, i, j);
		}
		printf("\n");
	}

}