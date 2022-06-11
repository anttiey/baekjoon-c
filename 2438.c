#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int T = 0;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;

}