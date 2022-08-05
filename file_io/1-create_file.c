#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, txt, len;

	file = 0;
	txt = 0;
	len = 0;

	if (filename == NULL)
		return  (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len] != '\0')
		len++;

	txt = write(file, text_content, len);
	if (txt == -1)
		return (0);

	close(file);

	return (1);
}
