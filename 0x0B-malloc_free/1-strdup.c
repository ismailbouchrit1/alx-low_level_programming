#include"main.h"

/**
 * _strdup -  returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 * @str: the string
 * Return: NULL, or pointer to a nes string
 */

char *_strdup(char *str)
{
	unsigned int len, i;
	char *newString;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	newString = (char *) malloc(len * sizeof(char) + 1);
	if (newString == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		newString[i] = str[i];

	return (newString);
}
