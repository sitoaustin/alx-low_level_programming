#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the newly concatenated array 
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *c_cant;
	int i;

	c_cant = malloc(sizeof(char) * 3);

	i = 0;
	
	if ((s1 == 0) & (s2 == 0))
		c_cant[0] = " ";
	while (s1[i] != '\0')
	{
		c_cant[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		c_cant[i] = s2[i];
	}
	return (c_cant);
}
