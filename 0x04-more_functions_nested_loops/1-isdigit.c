#include "main.h"

/**
 * _isdigit - Checks if c is a digit
 *
 * @c: takes an int
 *
 * Return: 1 if c is a digit
 * and 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
