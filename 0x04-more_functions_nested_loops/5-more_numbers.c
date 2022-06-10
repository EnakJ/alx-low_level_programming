#include "main.h"
#include <stdio.h>

/**
 * print_more_numbers - prints numbers from 0 to 9 10 times
 *
 * Return: void
 */
void print_more_numbers(void)
{
	int i;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
			_putchar((i % 10) + '0');
		_putchar('\n');
	}
}
