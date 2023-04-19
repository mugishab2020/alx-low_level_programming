#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - function to add two nuber
 * @a: the first number
 * @b: the second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to make the difference
 * @a: the first number
 * @b: the second number
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to make multiplication
 * @a: the first number
 * @b: the second number
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function to make devision
 * @a: the first number
 *@b: the second number
 *Return: the results for devision
 */
int op_div(int a, int b)
{

return (a / b);
}
/**
 * op_mod - function to return modulus
 * @a: the first number
 * @b: the second number
 * Return: the modulus
 */
int op_mod(int a, int b)
{
return (a % b);
}
