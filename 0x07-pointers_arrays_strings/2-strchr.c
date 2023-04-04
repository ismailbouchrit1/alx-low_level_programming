#include"main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: the string
 * @c: the character
 *
 * Return: a pointer that point at c
 */

char *_strchr(char *s, char c)
{
	unsigned int i, j;
	char *s1 = "";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
		else
			return (NULL);
	}

	j = 0;
	while (s[i - 1] != '\0')
	{
		s1[j] = s[i - 1];
		j++;
		i++;
	}

	return (s1);
}
