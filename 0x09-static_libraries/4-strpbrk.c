#include "main.h"
/**
 * _strpbrk - a function to check similality
 * @s: the main string
 * @accept: The secondary string
 * Return: the similarility
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
