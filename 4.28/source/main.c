#include <stdio.h>
#include <stdlib.h>

int main(void) {

	while (1) {

		int paycode = 0;
		float salary, hours, sum = 0;

		printf("��J�~���N�X(-1 to end) : ");
		scanf_s("%d", &paycode);
		if (paycode == -1) {
			break;
		}
		switch (paycode){
			
			case 1:
				printf("�п�J�g�~ : ");
				scanf_s("%f", &salary);
				printf("�g�~�� : $%.2f\n\n", salary);
				break;

			case 2:
				printf("�п�J���~ : ");
				scanf_s("%f", &salary);
				printf("�п�J�ɼ� : ");
				scanf_s("%f", &hours);
				if (hours > 40)
				{
					sum = 40 * salary + 1.5 * (hours - 40) * salary;
				}
				else
				{
					sum = salary * hours;
				}

				printf("�g�~�� : $%.2lf\n\n", sum);
				break;

			case 3:
				printf("�п�J�`�P���B : ");
				scanf_s("%f", &salary);
				printf("�g�~�� : $%.2f\n\n", 250+salary*0.0579);
				break;

			case 4:

				printf("�п�J�Ͳ���� : ");
				scanf_s("%f", &sum);
				printf("�п�J���S�� : ");
				scanf_s("%f", &salary);
				printf("�g�~�� :�@$%.2lf\n\n", sum * salary);
				break;

			default:
				printf("Error\n\n");
				break;
		}
	}

	system("pause");
	return 0;
}