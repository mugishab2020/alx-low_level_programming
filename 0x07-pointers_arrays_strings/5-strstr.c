#include "main.h"
/**
 * _strstr - function entry
 * @haystack: the main array
 * @needle: array
 * Return: always success (0)
 */
char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
