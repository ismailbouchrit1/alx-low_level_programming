#include"main.h"

/**
 * array_range -  creates an array of integers from min to max
 *
 * @min: minumum
 * @max: maximum
 *
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int *arr, i, c;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);

	i = 0;
	c = min;

	while (c <= max)
	{
		arr[i] = c;
		i++;
		c++;
	}
	return (arr);
}
