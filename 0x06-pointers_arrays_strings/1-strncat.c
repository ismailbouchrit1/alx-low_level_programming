#include"main.h"

/**
 * _strncat - concatenates two strings.
 * use at most n bytes from src
 *
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes
 * Return: a pointer of type char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[i] = '\n';
	return (dest);
}
