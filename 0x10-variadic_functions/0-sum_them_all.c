#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to make the sum af all agrs
 * @n: the first arg
 * @...: the conntinous agruments
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int a, sum = 0;

	va_start(add, n);

	for (a = 0; a < n; a++)
		sum += va_arg(add, int);
	va_end(add);

	return (sum);
}
