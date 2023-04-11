#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function to change args
 * @ac: the number of args
 * @av: the array of args
 * Return: the changed string
 */
char *argstostr(int ac, char **av)
{
	int a, n, b = 0, leng = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
		{
			leng++;
		}
	}
	leng += ac;
	str = malloc((leng + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
		{
			str[b] = av[a][n];
			b++;
		}
		if (str[b] == '\0')
		{
			str[b++] = '\n';
		}
	}
	return (str);
}
