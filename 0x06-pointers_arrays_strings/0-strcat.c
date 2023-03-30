#include"main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer of type char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[strlen(dest) + i] = src[i];
	dest[strlen(dest) + i] = '\0';
	return (dest);
}
