#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main() {

	int a;
	int b;

	scanf("%d", &a);
	scanf(" %d", &b);

	int sum = a + b;
	int min = a - b;
	int gob = a * b;
	int nan = a / b;
	int nam = a % b;

	printf("\n%d\n%d\n%d\n%d\n%d", sum, min, gob, nan, nam);

	return 0;
}
