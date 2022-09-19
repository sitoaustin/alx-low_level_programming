#include "main.h"

/**
 * swap_int - draw a diagonal line
 * @a: int
 * @b: int
 * Description: Can only use _putchar to print
 */

void swap_int(int *a, int *b)
{
	int m;

	int n;

	m = *a;
	n = *b;
	*a = n;
	*b = m;
}
