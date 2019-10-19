#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float principal, rate, days;

	while (1) {
		printf("Enter loan prinicpal (-1 to end): ");
		scanf_s("%f", &principal);
		if (principal == -1) {
			break;
		}
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &days);

		printf("The interest charge is $%.2f\n\n",principal*rate*days/365);
	}
	system("pause");
	return 0;
}