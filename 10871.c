#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N = 0;
	int X = 0;
	int input = 0;
	scanf("%d %d", &N, &X);


	for (int i = 0; i < N; i++) {
		scanf("%d", &input);
		if (input < X) {
			printf("%d ", input);
		}
	}

	return 0;

}