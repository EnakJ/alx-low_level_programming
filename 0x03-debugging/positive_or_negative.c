#include "main.h"
#include <unistd.h>

/**
 *positive_or_negative - Check sign on int
 *
 *Return: 0
 */
void positive_or_negative(int i)
{

	 if (i >= 0)
	{
		printf("%d is positive\n", i);
	} else
	{
		printf("%d is negative\n", i);
	}
}
