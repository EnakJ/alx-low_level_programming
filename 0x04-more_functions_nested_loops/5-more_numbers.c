#include "main.h"
#include <stdio.h>

/**
 * print_more_numbers - prints numbers from 0 to 14 10 times
 *
 * Return: void
 */
void print_more_numbers(void)
{
	int i;

	for (count = 0; count <= 9; count++)
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
