#include "main.h"

/**
* _isdigit - check for a digit
* @c: The digit to be checked
* Return: 1 if c is a digit, 0 else
*/
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
