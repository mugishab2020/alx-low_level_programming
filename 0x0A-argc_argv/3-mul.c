#include "main.h"
#include <stdio.h>
/**
 * _atoi - function to change string to integer
 * @s: the input to be changed
 * Return:The changd integer
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int rest = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
	{
		rest = (rest * 10) + (s[i] - '0');
		i++;
	}
	rest *= sign;
	return (rest);
}
/**
 * main - main entry of the program
 * @argc: The number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 for success 1 for erroe
 */
int main(int argc, char *argv[])
{
	int multi, n, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n = _atoi(argv[1]);
	m = _atoi(argv[2]);

	multi = n * m;

	printf("%d\n", multi);

	return (0);

}
