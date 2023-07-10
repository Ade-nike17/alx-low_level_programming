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
	size_t count = 0;
	FILE *fd;
	char buffer[1024];
	ssize_t bytesRead;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);

	while (count < letters && !feof(fd))
	{
		bytesRead = fread(buffer, sizeof(char), sizeof(buffer), fd);
		if (bytesRead == 0)
			break;
		count += bytesRead;
		fwrite(buffer, sizeof(char), bytesRead, stdout);
	}

	fclose(fd);

	return (count);
}
