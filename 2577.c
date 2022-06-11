#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	int num[3];
	int mul = 0, digit = 0, several_digit = 0;
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}

	mul = num[0] * num[1] * num[2];

	while (mul > 0) {
		digit++;
		mul = mul / 10;
	}

	mul = num[0] * num[1] * num[2];

	for (int i = digit; i >= 1; i--) {
		several_digit = mul / pow(10, i - 1);
		mul = mul - several_digit * pow(10, i - 1);
		if (several_digit == 0) zero++;
		if (several_digit == 1) one++;
		if (several_digit == 2) two++;
		if (several_digit == 3) three++;
		if (several_digit == 4) four++;
		if (several_digit == 5) five++;
		if (several_digit == 6) six++;
		if (several_digit == 7) seven++;
		if (several_digit == 8) eight++;
		if (several_digit == 9) nine++;
	}

	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", zero, one, two, three, four, five, six, seven, eight, nine);

	return 0;
}