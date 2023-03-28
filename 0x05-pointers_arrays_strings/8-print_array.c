#include"main.h"

/**
 * print_array - Print n element of an array
 * @a: the array
 * @n: the number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", *(a + i));
		else
			printf(", %d", *(a + i));
	}
		printf("\n");
}
