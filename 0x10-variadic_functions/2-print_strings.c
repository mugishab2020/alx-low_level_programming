#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function to print strings in args
 * @separator: the char to separate the strings
 * @n: the numbett of string passed
 * @...: The continouty of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	unsigned int a;
	char *s;

	va_start(strings, n);

	for (a = 0; a < n; a++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
		}

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");


	va_end(strings);
}
