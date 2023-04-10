#include <stdio.h>
#include "main.h"
/**
 * main - entry poiint of the program
 * @argc: The number of arguments
 * @argc_attribute_((unused): the unused variable
 * @argv: array of arguments
 *
 * Return: 0 as success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
