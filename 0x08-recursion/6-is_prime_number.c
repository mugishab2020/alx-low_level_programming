#include "main.h"
/**
 * helpingfunct - function to help in recursion
 * @num: the number to be checked
 * @a: the number for modulus operation
 * Return: 1/0 dipending on prime or non prime
 */
int helpingfunct(int num, int a)
{
	if (num > a)
	{
		if (num % a == 0)
		{
			return (0);
		}
		else
		{
			return (helpingfunct(num, a + 1));
		}
	}
	else
		return (1);
}
/**
 * is_prime_number - function to checkprime number
 * @n: the input number
 * Return: 0 for no prime and 1 for prime numbers
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (helpingfunct(n, 2));
}
