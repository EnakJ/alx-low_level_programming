#include "main.h"

/**
 * _islower - check lowercase character
 *
 * Description: checks the lowercase character
 * Return: 1 if c is lowercase Otherwise, return 0.
 */
int _islower(int c)
{
	int r;

	if (c <= 122 && c >= 97)
	{
		r = 1;
	} else
	{
		r = 0;
	}

	return (r);
}
