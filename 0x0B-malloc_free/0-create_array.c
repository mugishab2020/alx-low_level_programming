#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function to assign array wit c
 * @size: the size of array
 * @c: the character to be filled in arry
 * Return: the array fillesd with C
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int a;

arr = malloc(size * sizeof(char));

if (size == 0 || arr == NULL)
{
return (NULL);
}
for (a = 0; a < size; a++)
{
arr[a] = c;
}
return (arr);
}
