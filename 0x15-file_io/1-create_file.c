#include "main.h"
/**
 *create_file - function to create the file and provide permission
 * @filename: the name of the file provided
 * @text_content: content to give the file
 *
 * Return: 1 for success / -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

	}
	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	b = write(a, text_content, length);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
