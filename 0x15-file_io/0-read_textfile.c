#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - the function tothe text context from the file
 * @filename: the name oof the file
 * @letters: the nuber of letters passed
 *
 * Return: the number of the characters readed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, lett_num, file_rd;
	char *buffer;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	file_rd = read(file, buffer, letters);
	lett_num = write(STDOUT_FILENO, buffer, file_rd);

	free(buffer);
	close(file);
	return (lett_num);
}
