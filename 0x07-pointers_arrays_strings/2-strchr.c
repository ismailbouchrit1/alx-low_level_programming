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
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
