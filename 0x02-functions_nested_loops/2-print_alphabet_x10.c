#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int alpha , i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (alpha = 97 ; alpha <= 122 ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
