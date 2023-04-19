#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - printing arry element on the new line
 * @array: the array to be printed
 * @size: the array size
 * @action: pointer to the function to print
 *Return: nithing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
	return;
	}
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
