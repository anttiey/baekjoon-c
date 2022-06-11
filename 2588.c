#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b;
	int hunds, tens, ones;

	scanf("%d", &a);
	scanf("%d", &b);

	hunds = b / 100;
	tens = (b - hunds * 100) / 10;
	ones = b - hunds * 100 - tens * 10;

	printf("%d\n", a * ones);
	printf("%d\n", a * tens);
	printf("%d\n", a * hunds);
	printf("%d\n", a * b);

	return 0;
	
}