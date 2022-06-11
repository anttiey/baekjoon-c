#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int arr[100000];
int cnt = 0;

void push(int X) {
	arr[cnt] = X;
	cnt++;
}

void pop() {
	if (cnt == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", arr[cnt - 1]);
		cnt--;
	}
}

void size() {
	printf("%d\n", cnt);
}

void empty() {
	if (cnt == 0) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void top() {
	if (cnt == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", arr[cnt - 1]);
	}
}

int main() {
	int N, data;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		char command[6];
		scanf("%s", command);

		if (!strcmp(command, "push")) {
			scanf("%d", &data);
			push(data);
		}
		else if (!strcmp(command, "pop")) {
			pop();
		}
		else if (!strcmp(command, "size")) {
			size();
		}
		else if (!strcmp(command, "empty")) {
			empty();
		}
		else if (!strcmp(command, "top")) {
			top();
		}
	}

	return 0;
}