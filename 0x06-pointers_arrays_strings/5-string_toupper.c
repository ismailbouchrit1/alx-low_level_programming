#include"main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 *
 * @s: the string
 * Return: pointer of type char
 */

char *string_toupper(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
