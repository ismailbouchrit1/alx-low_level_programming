#include"main.h"

/**
 * swap_int - Swapes 2 integers
 * @a: 1 int
 * @b: 2nd int
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
