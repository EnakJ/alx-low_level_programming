#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets
 *
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	i = 65;

	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar("\n");
	return (0);
}
