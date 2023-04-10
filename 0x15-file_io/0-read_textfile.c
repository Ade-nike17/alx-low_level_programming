#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * read_textfile - pointer to the file
 *
 * @leters: number of letter to be read and printed
 *
 * Return: number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_written, bytes_read;
	char buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	if (letters > 0 && ((size_t)bytes_read > letters))
	{
		bytes_read = letters;
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_read != bytes_written)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_written);
}
