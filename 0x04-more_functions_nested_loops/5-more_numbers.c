#include "main.h"
#include <stdio.h>

/**
 * print_more_numbers - prints numbers from 0 to 14 10 times
 */
void print_more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
