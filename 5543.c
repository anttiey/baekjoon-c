#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int price[3];
	int coke;
	int cider;
	int cheap_b;
	int cheap_j;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &price[i]);
	}

	scanf("%d", &coke);
	scanf("%d", &cider);

	cheap_b = price[0];

	for (int i = 0; i < 3; i++) {
		if (price[i] < cheap_b) {
			cheap_b = price[i];
		}
	}

	if (coke <= cider) {
		cheap_j = coke;
	}
	else {
		cheap_j = cider;
	}

	printf("%d", cheap_b + cheap_j - 50);

	return 0;

}