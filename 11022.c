#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int T = 0;
	int a, b;
	scanf("%d", &T);

	for (int i = 1; i < T + 1; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}

	return 0;

}