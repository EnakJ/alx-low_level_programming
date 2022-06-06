#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 100 || i == 112)
		{
			putchar(i);
			i++;
		} else
		putchar(i);
	}
	printf("\n");
	return (0);
}
