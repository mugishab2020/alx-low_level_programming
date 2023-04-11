#include <stdlib.h>
#include "main.h"
/**
 * _strdup - the function to cpoty string
 * @str: the input to be copied
 * Return: the copy of the input
 */
char *_strdup(char *str)
{
	char *arr;
	int a, b = 0;

	if (str == NULL)
	{
	return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
	}
	arr = malloc((a + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (; str[b]; b++)
		arr[b] = str[b];
	return (arr);
}
