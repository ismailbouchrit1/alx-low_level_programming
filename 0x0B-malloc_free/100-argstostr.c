#include"main.h"

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: args count
 * @av: arguments
 *
 * Return: NULL or pointer to a string
 */

char *argstostr(int ac, char **av)
{
	char *args;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (i = 0; av[j][i] != '\0'; i++)
			size++;
		size++;
	}

	args = (char *) malloc(sizeof(char) * size + 1);
	if (args == NULL)
		return (NULL);
	k = 0;
	for (j = 0; j < ac; j++)
	{
		for (i = 0; av[j][i] != '\0'; i++)
		{
			args[k] = av[j][i];
			k++;
		}
		args[k] = '\n';
		k++;
	}

	return (args);
}
