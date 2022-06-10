#include "main.h"

/**
 * _isupper - check the upcase character
 *
 * Return: 1 if c is upcase character, 0 else
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
