#include "main.h"
/**
 * _strstr - the function to find similarity
 * @haystack: the first string
 * @needle: the second string
 * Return: The similarity
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
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
