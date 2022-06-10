#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many 
* @day: days are left in the year, taking
* leap year into account
* @month: month in number format
* @year: year
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;

	day = 29;
	month = 02;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
