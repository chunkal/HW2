#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float hours,rate;

	while (1) {
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%f", &hours);
		if (hours == -1) {
			break;
		}
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		printf("Salary is $%.2f\n\n", hours * rate);
	}

	system("pasue");
	return 0;
}