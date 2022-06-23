#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *@n: an integer
 * Return: the factorial of @n
 */
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		fact = -1;
	if (n == 0)
		fact = 1;
	if (n == 1)
		fact = 1;
	if (n != 0 && n != 1)
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
