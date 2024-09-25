#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};
struct time {
	int hours;
	int minutes;
	int seconds;
};


int main() {
	printf("*******  Array of Structures ******\n\n");
		
	enum WeekDay { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

	struct dateAndTime {
		struct date sdate;
		struct time stime;
		enum WeekDay sday;
	};
	
	struct dateAndTime event = { {2,1,2024},{3,30,56},Monday};

	struct date myDates[10];

	for (int i = 0; i < 10; i++)
	{
		myDates[i].day = 20 + i;
		myDates[i].month = 1 + i;
		myDates[i].year = 2000 + 2 * i;

	}

	printf("\n");
	//system("pause");
	return 0;
}

