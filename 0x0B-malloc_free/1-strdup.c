#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory
 *
 * @str: a list
 *
 * Return: a new string of str duplicate
 * or null if str = NULL
 * or null if isufficient memory
 */

char *_strdup(char *str)
{
	char *mem;

	mem = malloc(sizeof(str) * 10);

	if (str == NULL)
		return (NULL);
	return (mem);

}
