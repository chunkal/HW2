#include<stdio.h>
#include<stdlib.h>


int main(void) {
	float account, begin_balance, charges, credits, limits;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%f", &account);
		if (account == -1)break;

		printf("Enter beginning balance: ");
		scanf_s("%f", &begin_balance);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credits: ");
		scanf_s("%f", &credits);
		printf("Enter credits limit: ");
		scanf_s("%f", &limits);

		if ((begin_balance + charges - credits) > limits) {
			printf("Account:\t%.0lf\n", account);
			printf("Credit limit:\t%.2lf\n", limits);
			printf("Balance:\t%.2lf\n", begin_balance + charges - credits);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");

	}

	system("pause");
	return 0;

}