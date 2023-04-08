#include "main.h"
/**
 * _strcpy - function to copy the string
 * @dest: the copy of the main string
 * @src: the main string
 * Return: the copy string of the main stringg
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	while  (*(src + a) != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}
