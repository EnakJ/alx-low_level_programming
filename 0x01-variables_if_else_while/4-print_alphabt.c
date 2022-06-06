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
		if (i == 101 || i == 113)
		{
			i++;
		} else
		putchar(i);
	}
	printf("");
	return (0);
}
