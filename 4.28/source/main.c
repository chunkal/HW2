#include <stdio.h>
#include <stdlib.h>

int main(void) {

	while (1) {

		int paycode = 0;
		float salary, hours, sum = 0;

		printf("輸入薪水代碼(-1 to end) : ");
		scanf_s("%d", &paycode);
		if (paycode == -1) {
			break;
		}
		switch (paycode){
			
			case 1:
				printf("請輸入週薪 : ");
				scanf_s("%f", &salary);
				printf("週薪為 : $%.2f\n\n", salary);
				break;

			case 2:
				printf("請輸入時薪 : ");
				scanf_s("%f", &salary);
				printf("請輸入時數 : ");
				scanf_s("%f", &hours);
				if (hours > 40)
				{
					sum = 40 * salary + 1.5 * (hours - 40) * salary;
				}
				else
				{
					sum = salary * hours;
				}

				printf("週薪為 : $%.2lf\n\n", sum);
				break;

			case 3:
				printf("請輸入總銷售額 : ");
				scanf_s("%f", &salary);
				printf("週薪為 : $%.2f\n\n", 250+salary*0.0579);
				break;

			case 4:

				printf("請輸入生產件數 : ");
				scanf_s("%f", &sum);
				printf("請輸入單件酬勞 : ");
				scanf_s("%f", &salary);
				printf("週薪為 :　$%.2lf\n\n", sum * salary);
				break;

			default:
				printf("Error\n\n");
				break;
		}
	}

	system("pause");
	return 0;
}