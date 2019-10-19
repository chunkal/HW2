#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int length, breadth;

	printf("Enter length and breadth:¡@");
	scanf_s("%d%d", &length, &breadth);
	for (int i = 0; i < length; i++) {
		printf("*");
		for (int j = 2; j < breadth; j++) {
			if (i == 0 || i == length-1 ) {
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("*\n");
	}

	system("pause");
	return 0;
}