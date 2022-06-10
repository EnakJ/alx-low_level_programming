#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i = 1 || i = 3)
		{
			_putchar((i % 10) + '0');
			i++;
		}
		else
			_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
