#include "main.h"
/**
 * _memcpy - function to coppy string
 * @dest: the array for copied
 *@src: the array to be copied
 *Return: The array for copied
 *@n: the number of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a, b;

	b = n;
	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
