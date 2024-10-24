#include<stdio.h>
int main(void)
{
	struct date{
		int month;
		int day;
		int year;
	};
	struct date today={12,25,2020};
	struct date  da;
	da=(struct date){12,5,2019};
	printf("da : %i %i %i\n",da.year,da.day,da.month);
	today=da;
	//today.day=24;
	//today.month=10;
	//today.year=2024;
	printf("today is %i %i %i\n",today.year,today.month,today.day);
	return 0;
 } 
