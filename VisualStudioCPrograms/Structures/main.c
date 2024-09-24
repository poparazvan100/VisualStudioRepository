#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

struct employee {
	//char name[10];
	struct date hireDate;
	float salary;
};

int main() {
	printf("*******  Structures ******\n\n");


	struct date today;
	today.month = 9;
	today.day = 24;
	today.year = 2024;

	struct date tomorrow = { 9,25,2024 };

	struct date nextDay = { .day = 15,.month = 9,.year = 2024 };

	struct position {
		float xDist;
		float yDist;
		float zDist;
	} currentPosition;

	currentPosition.xDist = 2.3;
	currentPosition.yDist = 5.3;
	currentPosition.zDist = 2.8;
	
	struct {
		float xDist;
		float yDist;
		float zDist;
	} origin;
	origin.xDist = 2.3;
	origin.yDist = 5.3;
	origin.zDist = 2.8;

	printf("Today's date is %i/%i/%i\n", today.month, today.day, today.year);
	printf("Tomorrow's date is %i/%i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);

	/*E Exercise here*/
	
	struct employee newGuy = {today,12000};

	//printf("Name %s\n", newGuy.name);
	printf("Hire date is %i/%i/%i\n", newGuy.hireDate.month, newGuy.hireDate.day, newGuy.hireDate.year);
	printf("Salary is %.2f\n", newGuy.salary);

	struct employee newColleague;

	printf("Enter the data for the new colleague: \n");
	//printf("Name: ");
	//scanf_s("%s", &newColleague.name);
	printf("Salary: ");
	scanf_s("%f", &newColleague.salary);
	printf("Hire date day: ");
	scanf_s("%i", &newColleague.hireDate.day);
	printf("Hire date month: ");
	scanf_s("%i", &newColleague.hireDate.month);
	printf("Hire date year: ");
	scanf_s("%i", &newColleague.hireDate.year);

	//printf("Name %s\n", newColleague.name);
	printf("Hire date is %i/%i/%i\n", newColleague.hireDate.month, newColleague.hireDate.day, newColleague.hireDate.year);
	printf("Salary is %.2f\n", newColleague.salary);


	printf("\n");
	system("pause");
	return 0;
}