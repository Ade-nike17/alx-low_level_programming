#include "main.h"

/**
 * create_file - function creates file
 *
 * @filename: name of file
 * @text_content: NULL terminating string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length, bytesWritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	length = strlen(text_content);

	bytesWritten = write(fd, text_content, length);
	if (bytesWritten == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
