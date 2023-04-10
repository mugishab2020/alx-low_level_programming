#include<stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include<string.h>
/**
 * check_number - function to check numbers
 * @str: the inut to be checkedd
 * Return: 1 for not numbers 0 fon number
 */
int check_number(char *str)
{
unsigned int n;

n = 0;
while (n < strlen(str))
{
	if (!isdigit(str[n]))
	{
		return (0);
	}
	n++;
}
return (1);
}
/**
 * main - main intry of the program
 *@argc: number of arguments
 *@argv: the array of arguments
 *Return: o as succes
 */
int main(int argc, char *argv[])
{
	int a, converted, sum = 0;

	a = 1;
	while (a < argc)
	{
		if (check_number(argv[a]) == 1)
		{
			converted = atoi(argv[a]);
			sum = sum + converted;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
