#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int num = 0;
	printf("digite seu numero (sem virgula):");
	scanf("%d", &num);
	if ((num % 2) == 0) {
		printf("PIM");
	} else {
		printf("POM");
	}
	return 0;
}