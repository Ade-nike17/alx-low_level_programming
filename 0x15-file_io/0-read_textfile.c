#include "main.h"

/**
 * read_textfile - function reads a file and prints it
 * out to the POSIX standard output
 *
 * @filename: name of file
 * @letters: number of letters it should read and print
 *
 * Return: the actual no of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL || buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
		return (0);

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if  (bytesWritten == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);

	return (bytesWritten);
}
