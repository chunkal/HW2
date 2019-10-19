#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("(A)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("(B)\n");
	for (int i = 0; i <= 10; i++) {
		for (int j = 10; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}

	printf("(C)\n");
	for (int i = 0; i <= 10; i++) {

		for (int k = 0; k < i; k++) {
			printf(" ");
		}

		for (int j = 10; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}

	printf("D)\n");
	for (int i = 0; i < 10; i++) {
		
		for (int j = 9; j > i; j--) {
			printf(" ");
		}

		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}