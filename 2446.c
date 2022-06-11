#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num = 0;
	scanf("%d", &num);

	for (int i = num; i >= 1; i--) {
		for (int j = 2 * num - 1; j >= 1; j--) {
			if (j > num + i - 1) {
				printf(" ");
			}
			else if (j > num - i && j <= num + i - 1) {
				printf("*");
			}
		}
		printf("\n");
	}
	for (int i = 2; i <= num; i++) {
		for (int j = 1; j <= 2 * num - 1; j++) {
			if (j <= num - i) {
				printf(" ");
			} else if (j > num - i && j <= num + i - 1) {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;

}