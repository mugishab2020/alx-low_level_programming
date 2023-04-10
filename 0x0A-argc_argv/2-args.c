#include "main.h"
#include <stdio.h>
/**
 * main - main entry of the program
 * @argv: arry of argments
 * @argc: number of agruments
 *
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	int a;

	a = 0;
	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;

	}
	return (0);
}
