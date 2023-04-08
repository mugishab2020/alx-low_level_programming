#include "main.h"
#include <unistd.h>
/**
 * _putchar - fnction to write a character
 * @c: The character to be printed
 * Return: Characther printed
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
