#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int i = 97;
	int end = 122;

	for (; i <= end; i++)
	{
		putchar(i);
		if (i == end)
		{
			i = 65;
			end = 90;
		}
	}
	putchar('\n');
	return (0);
}
