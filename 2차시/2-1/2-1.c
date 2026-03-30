#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int input;
	int i;

	printf("숫자를 입력: ");
	scanf("%d", &input);

	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", input, i, input * i);
	}

	return 0;
}