#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b, c;
	int count = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (c <= b) {
		printf("-1");
		return 0;
	}
	else {
		printf("%d", a / (c - b) + 1);
		return 0;
	}

}