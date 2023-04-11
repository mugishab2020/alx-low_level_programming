#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - the function to returnn 2-d arry
 * @width: the first number index
 * @height: the second number of index
 * Return: the point of 2D
 */
int **alloc_grid(int width, int height)
{
int **arr;
int a, b;

arr = malloc(height * sizeof(int *));

if (arr == NULL || width <= 0 || height <= 0)
	return (NULL);

for (a = 0; a < height; a++)
{
	arr[a] = malloc(sizeof(int) * width);
	if (arr[a] == NULL)
	{
		for (; a > 0; a--)
			free(arr[a]);


	free(arr);
	return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
	arr[a][b] = 0;
}
}
return (arr);
}
