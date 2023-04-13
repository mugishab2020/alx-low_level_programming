#include "main.h"
#include <stdlib.h>
/**
 * _setvalue - the function to set vaalue
 *@point: the pointer to the array
 * @a: the value to be initialised
 * @b: the number of bytes to initialize
 * Return: the initialized array
 */
char *_setvalue(char *point, char a, unsigned int b)
{
unsigned int c;

for  (c = 0; c < b; c++)
{
	point[c] = a;
}
return (point);
}
/**
 * _calloc - function to allocate memory of certain number
 * @nmemb: Number of elements to reserve mem for
 * @size: number of btyes to reserve
 * Return: the pointer to the reserved memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);
_setvalue(arr, 0, nmemb * size);
return (arr);
}
