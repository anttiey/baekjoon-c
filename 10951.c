#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int a = 0;
	int b = 0;

	int ch = 0;

	while (1) {

		ch = scanf("%d %d", &a, &b);
		if (ch == EOF) {
			break;
		}
		printf("%d\n", a + b);

	}

	return 0;

}