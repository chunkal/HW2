#include <stdio.h>
#include <stdlib.h>

int main(void) {

	for (int i = 0; i < 5; i++) {

		for (int j = 4; j > i; j--) {
			printf(" ");
		}

		for (int j = 0; j <= i; j++) {
			printf("*");
		}

		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	for (int i = 4; i > 0; i--) {

		for (int j = 4; j >= i; j--) {
			printf(" ");
		}

		for (int j = 0; j < i; j++) {
			printf("*");
		}

		for (int k = 1; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}