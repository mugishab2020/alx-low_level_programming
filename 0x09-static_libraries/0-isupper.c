#include "main.h"
/**
 * _isupper - function to check the uppercase letter
 * @c: the input to be checked
 *
 * Return: 1/0 depending on upper or lower case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
