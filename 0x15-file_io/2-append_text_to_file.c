#include "main.h"
/**
 *append_text_to_file - function to append to the end of the file
 *@filename: the filename to use
 *@text_content: the number of the
 *
 * Return: 1 for success / -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}
		a = open(filename, O_WRONLY | O_APPEND);
		b = write(a, text_content, length);

		if (a == -1 || b == -1)

			return (-1);
		close(a);
		return (1);
}
