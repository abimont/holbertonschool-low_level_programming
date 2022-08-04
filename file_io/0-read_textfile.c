#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, content, print;
	char *buffer;

	file = 0, content = 0, print = 0;
	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	content = read(file, buffer, letters);
	if (content == -1)
		return (0);

	print = write(STDOUT_FILENO, buffer, content);
	if (print == -1)
		return (0);

	close(file);

	return (print);
}
