#include <main.h>

/**
 * main - function print_alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar("\n");
}
