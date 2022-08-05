#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, txt, len;

	file = 0;
	txt = 0;
	len = 0;
	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL && filename)
		return (1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	if (!filename)
		return (-1);

	txt = write(file, text_content, len);
	if (txt == -1)
	return (-1);

	close(file);
	return (1);
}
