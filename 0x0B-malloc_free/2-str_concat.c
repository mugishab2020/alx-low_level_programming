#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function to concatinate two string
 * @s1: the first string inputed
 * @s2: the second string inputed
 * Return: the concatinated strin of two strings given
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
		b++;
	arr = malloc((a + b + 1) * sizeof(char));
	if  (arr == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		arr[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		arr[a] = s2[b];
		a++, b++;
	}
	arr[a] = '\0';
	return (arr);

}
