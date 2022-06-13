#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap int
 * Description: swaps the value of two integers
 *@a: int
 *@b: int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
