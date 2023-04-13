#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - the function to allocate memory
 *@b: the size of memory to be reserved
 *Return: pointer pointed to the memory reserved
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
