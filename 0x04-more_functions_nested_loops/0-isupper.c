#include "main.h"

/**
 * _isupper - Checks if c is upper or lower
 *
 * @c: takes an int
 *
 * Return: 1 if c is uppercase
 * and 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
