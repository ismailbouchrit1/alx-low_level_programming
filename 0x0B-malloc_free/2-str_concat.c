#include"main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: NULL or pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int len1 = 0, len2 = 0, i, j;


	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	string = malloc(sizeof(char) * (len1 + len2 + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < strlen(s1))
		{
			string[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (j < strlen(s2))
		{
			string[i] = s2[j];
			i++;
			j++;
		}
	}
	string[i] = '\0';

	return (string);

}
