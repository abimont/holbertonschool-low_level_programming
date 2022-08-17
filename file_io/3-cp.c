#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, wr;
	ssize_t rd = 1024;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	open_err(file_from, file_to, argv);

	while (rd == 1024)
	{
		rd = read(file_from, buffer, 1024);
		if (rd == -1)
			open_err(-1, 0, argv);
		wr = write(file_to, buffer, rd);
		if (wr == -1)
			open_err(0, -1, argv);
	}
	closing(file_from, file_to);
	return (0);
}

/**
 * closing - close file descriptors
 * @file_from: first file to close
 * @file_to: second file to close
 *
 * Return: 0
 */

void closing(int file_from, int file_to)
{
	int close_from, close_to;

	close_from = close(file_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_to = close(file_to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

}

/**
 * open_err - checks for error in open process
 * @file_from: first file
 * @file_to: second file
 * @argv: argument vector
 *
 * Return: void
 */

void open_err(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
