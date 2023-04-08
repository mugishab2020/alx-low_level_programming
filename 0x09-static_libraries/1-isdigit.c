#include "main.h"
/**
 * _isdigit - function to check the digit
 * @c: the input to be checked
 * Return: 1 for digit , 0 for non-digits
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
