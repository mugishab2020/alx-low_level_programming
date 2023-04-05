#include "main.h"
/**
 * _pow_recursion - function to return power of number
 *@x: Base number
 *@y: exponent number
 *Return: power of the number
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
else if (y == 0)
{
	return (1);
}
else
{
	return (x * _pow_recursion(x, y - 1));
}
}
