#include "main.h"
/**
 * get_endianness - function to check the endianness
 *
 * Return: the character array
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
