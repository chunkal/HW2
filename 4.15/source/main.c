#include <stdio.h>
#include <stdlib.h>

int main(void) {

	double amount;
	double principle = 5000;
	double rate = .05;

	unsigned int year;
	for (rate = 0.1; rate <= 0.125; rate += 0.005) {

		printf("%4s%21s", "Year", "Amount on deposit ");
		printf("(%.1lf%%) \n", rate * 100);
		for (year = 1; year <= 15; ++year) {
			principle = principle * (rate+1);

			printf("%4u%18.2f\n", year, principle);
		}
		printf("\n");
		principle = 5000;
	}

	system("pause");
	return 0;
}