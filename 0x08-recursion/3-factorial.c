#include "main.h"
/**
 * factorial - function to return factorial of a number
 * @n: inputed number
 * Return: Factorial of the number
 */
int factorial(int n)
{
if (n == 0)
{
	return (1);
}
else if (n < 0)
{
	return (-1);
}
else
{
	return (n * factorial(n - 1));
}
}
