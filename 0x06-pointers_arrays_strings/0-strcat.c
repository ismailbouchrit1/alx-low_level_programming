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
	int len = strlen(dest);

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
