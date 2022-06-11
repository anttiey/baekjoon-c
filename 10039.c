#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int point[5];

	for (int i = 0; i < 5; i++) {
		scanf("%d", &point[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (point[i] < 40) {
			point[i] = 40;
		}
	}

	printf("%d", (point[0] + point[1] + point[2] + point[3] + point[4]) / 5);

	return 0;

}