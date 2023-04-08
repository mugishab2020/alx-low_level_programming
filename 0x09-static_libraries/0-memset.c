#include "main.h"
/**
 * _memset - the functioon to reset memory
 * @s: The memory to be filled
 * @b: th value to fill
 * @n: Number of times to fil
 *
 * Return: The filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);

}
