#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = num - 1; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;

}