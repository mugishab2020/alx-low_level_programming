#include "main.h"
/**
 * _memcpy - a function that copies memory
 * @dest: where to store
 * @src: where memory is copied from
 * @n: number oof characters
 *
 * Return: memory in dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a  = 0;
int b = n;
for (; a < b; a++)
{
	dest[a] = src[a];
	n--;
}
return (dest);
}
