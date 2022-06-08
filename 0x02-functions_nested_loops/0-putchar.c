#include <stdio.h>
#include "main.h"

/**
 *main - print putchar
 *
 *Return: 0
 */
int main(void)
{
	char c[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int n = 0;

	while (n <= 7)
	{
		putchar(c[n]);
		n++;
	}
	putchar("\n");
	return (0);
}
