#include"main.h"

/**
 * _islower - return 0 if not lowercase and 1 in it is lowercase
 * @c: character to check
 * Return: 0 or 1
 */

int _islower(int c)
{
	char i = 'a';

	while (i <= 'z' && i >= 'a')
	{
		if (c == i)
			return (1);
	}
	return (0);
}
