#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function to make realocation
 *@ptr: pointer to reallocate
 *@old_size: The size of the old pointed array
 *@new_size: The new size of the array
 *Return: the new poined array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int a;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
old_ptr = ptr;

if (new_size < old_size)
for (a = 0; a < new_size; a++)
new_ptr[a] = old_ptr[a];
if (new_size > old_size)
{
for (a = 0; a < old_size; a++)
new_ptr[a] = old_ptr[a];


}
free(ptr);
return (new_ptr);
}
