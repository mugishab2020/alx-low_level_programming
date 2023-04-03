#include "main.h"
/**
*_memcpy - a function that copies memory area
*@n: the number of bytes
*@src: the array with bytes to be copied
*@dest: the array to cintain the copied bytes
*Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for  (a = 0; n > 0; a++)
	{
		src[a] = dest[a];
		n--;
	}
	return (dest);
}
