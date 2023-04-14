#include"main.h"

/**
 * string_nconcat -  concatenates two strings.
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: n first bytes of s2
 *
 * Return: NULL or pointer to new allocated space of memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j, len1 = 0, len2 = 0, size;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (len2 > n)
		len2 = n;
	size = len1 + len2 + 1;
	string = malloc(size);
	if (string == NULL)
		return (NULL);
	if (s1)
	{
		for (i = 0; i < len1; i++)
			string[i] = s1[i];
	}
	if (s2)
	{
		for (j = 0; j < len2; j++)
		{
			string[i] = s2[j];
			i++;
		}
	}
	string[i] = '\0';
	return (string);
}
