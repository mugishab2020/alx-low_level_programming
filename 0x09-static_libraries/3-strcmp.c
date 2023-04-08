#include "main.h"
/**
 * _strcmp - function to compare two string
 * @s1: the first string
 *@s2: the second string
 * Return: 0 always as success
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
