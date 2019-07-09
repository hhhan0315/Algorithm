#include <stdio.h>
#include <string.h>
int main() {
	char array[100];
	int count=0;
	int i;
	scanf("%s", &array);
	for (i = 0; array[i]!=NULL; i++) {
		if (array[i] == 'c' && (array[i + 1] == '=' || array[i + 1] == '-'))
		{
			i++;
		}

		else if (array[i] == 'd')
		{
			if (array[i + 1] == '-') i++;
			else if (array[i + 1] == 'z' && array[i + 2] == '=') i+=2;
		}

		else if ((array[i] == 'l' || array[i] == 'n') && array[i + 1] == 'j')
		{
			i++;
		}

		else if ((array[i] == 's' || array[i] == 'z') && array[i + 1] == '=')
		{
			i++;
		}

		count++;
	}
	printf("%d", count);
	return 0;
	//for문에서 i++를 이미 한번해주니 각 조건에서 이를 생각하고 해야한다.
}