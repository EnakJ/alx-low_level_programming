#include <stdio.h>
#include "main.h"

/**
 * _puts - print string
 *@str: char
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
