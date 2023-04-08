#include "main.h"
/**
 * _strlen - function to find kength of string
 * @s: the input string to be checked
 * Return: the length if the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
