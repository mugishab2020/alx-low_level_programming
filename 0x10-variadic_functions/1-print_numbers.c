#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function to print numbers from argments
 * @separator: the character to seprate numbers
 * @n: the first number
 * @...: the continous args
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a;

	va_start(numbers, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbers, int));

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
