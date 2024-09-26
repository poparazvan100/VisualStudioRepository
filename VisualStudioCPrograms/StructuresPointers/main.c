#include <stdio.h>

typedef struct date
{
	int month;
	int day;
	int year;
} date;

int main() {
	printf("******* Structures Pointers ******\n\n");


	date today;

	struct date* datePtr;
	datePtr = &today;

	datePtr->month = 9;
	datePtr->day = 26;
	datePtr->year = 2024;

	printf("Today's date is %i/%i/%i\n", datePtr->month, datePtr->day, datePtr->year);

	printf("\n");
	//system("pause");
	return 0;
}