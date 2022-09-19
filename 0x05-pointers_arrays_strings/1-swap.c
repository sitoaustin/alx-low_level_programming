#include "main.h"

/**
 * swap_int - draw a diagonal line
 * @a: int
 * @b: int
 * Description: Can only use _putchar to print
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
