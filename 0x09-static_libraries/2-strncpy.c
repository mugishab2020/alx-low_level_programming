#include "main.h"
/**
 * _strncpy - function to copy the string
 * @dest: copied string
 * @src: original string
 * @n: bytes to be copied
 * Return: copied String
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);

}
