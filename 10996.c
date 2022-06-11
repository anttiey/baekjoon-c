#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);

	if ((num % 2) == 0) {
		for (int i = 1; i <= 2 * num; i++) {
			if ((i % 2) != 0) {
				for (int j = 1; j <= num - 1; j++) {
					if ((j % 2) == 1) printf("*");
					else printf(" ");
				}
			}
			else if ((i % 2) == 0) {
				for (int j = 1; j <= num; j++) {
					if ((j % 2) == 0) printf("*");
					else printf(" ");
				}
			}
			printf("\n");
		}
	}

	if ((num % 2) != 0) {
		for (int i = 1; i <= 2 * num; i++) {
			if ((i % 2) != 0) {
				for (int j = 1; j <= num; j++) {
					if ((j % 2) == 0) printf(" ");
					else printf("*");
				}
			}
			else if ((i % 2) == 0) {
				for (int j = 1; j <= num - 1; j++) {
					if ((j % 2) == 1) printf(" ");
					else printf("*");
				}
			}
			printf("\n");
		}
	}

	return 0;
}