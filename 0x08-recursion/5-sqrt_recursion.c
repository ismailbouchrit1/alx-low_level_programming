#include"main.h"

/**
 * actual_sqrt - recurses to find the natural
 * square root of a number.
 * @n: the number
 * @i: iterator
 *
 * Return: the square root
 */

int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculate the natural square root of a number.
 *
 * @n: the number
 *
 * Return: -1 if n doesn't have a natural square root, or sqrt(n)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}
