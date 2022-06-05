#include <stdio.h>

/**
 * main - print letters
 *
 * Return:0
 */
int main(void)
{
	int i;
	for (i = 97 ; i < 122 ; i ++)
	{
		printf("%c", i);
		printf();
	}
	return (0);
}
