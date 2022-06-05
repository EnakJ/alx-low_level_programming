#include <stdio.h>
#include <stdlib.h>

/**
 * main - print letters
 *
 * Return:0
 */
int main(void)
{
	int i;
	for (i = 97; i < 122; i++)
	{
		putchar (i);
		puts();
	}
	return (0);
}
