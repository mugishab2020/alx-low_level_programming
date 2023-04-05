#include "main.h"
/**
 * helpingfunct - function helping in recursion
 * @num: The nuber to be squaretooted
 * @a:squareroot to be checked
 * Return: a as squareroot
 */
int helpingfunct(int num, int a)
{
	if ((a * a) == num)
	{
		return (a);
	}
	else
	{
		if ((a * a) > num)
			return (-1);
		else
			return (helpingfunct(num, a + 1));
	}

}
/**
 * _sqrt_recursion - function to find sqrt of a number recursing
 * @n: number to be squarerooted
 * Return: Integer Square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
else
{
	return (helpingfunct(n, 0));
}
}
