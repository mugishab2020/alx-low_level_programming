#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - the main entry of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
int a, number, results;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
number = atoi(argv[1]);
results = 0;

if (number < 0)
{
	printf("0\n");
	return (0);
}

for (a = 0; a < 5 && number >= 0; a++)
{
	while (number >= coins[a])
	{
		results++;
		number -= coins[a];
	}
}
printf("%d\n", results);
return (0);
}

