#include <stdio.h>
int main() {
	int num;
	int h, w, n;

	scanf("%d", &num);
	for (int i = 0; i<num; i++) {
		scanf("%d %d %d", &h, &w, &n);

		if (n%h != 0) {
			if (n / h + 1 >= 10) printf("%d%d\n", n%h, n / h + 1);
			else printf("%d0%d\n", n%h, n / h + 1);
		}
		else {
			if (n / h >= 10) printf("%d%d\n", h, n / h);
			else printf("%d0%d\n", h, n / h);
		}

	}
	return 0;
	//ó���� �׳� �ڵ��� �ߴٰ� ��������� �� ���� �߻� ���� �߰� �� ����
}
