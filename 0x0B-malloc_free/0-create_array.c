#include "main.h"

/**
 * create_array - a function that creates an array of chars and
 * initializes it with a specific char
 *
 * @size: an unsigned int
 * @c: a char
 *
 * Return: NULL if size = 0
 * or a pinter to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int *t;

	t = malloc(sizeof(c) * size);

	char **w;

	w = &t;

	if (size == 0)
	{
		return ("NULL");
	}
	else
	{
		return (*w);
	}
}
