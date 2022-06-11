#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d", &n);

	a = n;

	while (1) {

		if (n < 10) {
			n = n * 10 + n;
		}
		else if (n >= 10) {
			c = n / 10 + n % 10;
			n = (n % 10) * 10 + c % 10;
		}

		b++;

		if (n == a) {
			break;
		}

	}

	printf("%d", b);

	return 0;

}