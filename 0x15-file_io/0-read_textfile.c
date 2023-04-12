#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * read_textfile - function reads and prints a textfile to the POSIX STDOUT
 *
 * @filename: pointer to the file
 * @letters: number of letter to be read and printed
 *
 * Return: number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written = 0;
	char buffer[1024];

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	while (bytes_written < (ssize_t)letters &&
			(bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		if (bytes_written + bytes_read > (ssize_t)letters)
		{
			bytes_read = (ssize_t)letters - bytes_written;
		}
		if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
		{
			close(fd);
			return (0);
		}
		bytes_written += bytes_read;
	}
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	if (close(fd) == -1)
	{
		return (0);
	}
	return (bytes_written);
}
