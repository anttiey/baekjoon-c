#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int num[3];
	int temp;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (num[j + 1] < num[j]) {
				temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("%d", num[1]);

	return 0;

}