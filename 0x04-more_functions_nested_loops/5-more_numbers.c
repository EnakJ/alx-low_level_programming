#include "main.h"
#include <stdio.h>

/**
 * print_more_numbers - prints numbers from 0 to 14 10 times
 */
void print_more_numbers(void)
{
	int i;

	for (count = 0; count <= 9; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
