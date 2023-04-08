#include "main.h"
/**
 * _strncat - function to concatinate the string
 * @dest: the first string
 *@src: the second string
 *@n: the number of bytes to concatinate
 *Return: dest ass concainated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] == '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
