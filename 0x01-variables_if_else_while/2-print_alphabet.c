#include <stdio.h>
#include <stdlib.h>

/**
 *main - Print alphabet letters
 *
 *Return:0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	printf("\n");
	return (0);
}
