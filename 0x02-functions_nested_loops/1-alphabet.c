#include "main.h"

/**
 * print_alphabet - print lower case alphabet
 * Description: prints lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
