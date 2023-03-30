#include"main.h"

/**
 * _strcmp- compares two strings.
 *
 * @s1: the 1st string
 * @s2: the 2nd string
 *
 * Return:less than 0, 0 or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		S2++;
	}
	return (*s1 - *s2);
}
