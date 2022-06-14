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
	char *c;
	
	for (c = &str; str != '\0'; c++)
	{
		str = *c;
		putchar(str);
	}
	putchar('\n');
}
