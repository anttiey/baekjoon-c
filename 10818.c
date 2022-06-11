#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;
	int num = 0;
	int min, max;

	scanf("%d", &N);
	scanf("%d", &num);

	max = num;
	min = num;

	for (int i = 0; i < N - 1; i++) {

		scanf("%d", &num);

		if (num > max) {
			max = num;
		}

		if (num < min) {
			min = num;
		}

	}

	printf("%d %d", min, max);

}