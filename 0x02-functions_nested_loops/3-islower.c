#include "main.h"

/**
 * _islower - check lowercase character
 *@c: integer
 * Description: checks the lowercase character
 * Return: 1 if c is lowercase Otherwise, return 0.
 */
int _islower(int c)
{
	int m;

	if (c <= 122 && c >= 97)
	{
		m = 1;
	}
	else
	{
		m = 0;
	}
	return (m);
}
