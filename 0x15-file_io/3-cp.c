#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * exit_error - function writes error messeages
 *
 * @code: lines of code with error
 * @error_message: pointer to the weeoe message
 *
 * Return: nothing
 */

void exit_error(int code, const char *error_message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", error_message);
	exit(code);
}

/**
 * cp_file - function copies the content of a file to another file
 *
 * @file_from: pointer to where the content is being copied from
 * @file_to: pointer to where the content is being copied to
 *
 * Return: nothing
 */


void cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t char_write, char_read;
	char buffer[BUFFER_SIZE];

	/* reads file */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit_error(98, file_from);
	}

	/* writes file or create if file does not exist */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		exit_error(99, file_to);
	}

	/* COPY CONTENT FROM FILE_FROM TO FILE_TO */
	while ((char_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		char_write = write(fd_to, buffer, char_read);

		if (char_write != char_read)
		{
			exit_error(99, file_to);
		}
	}
	if (char_read == -1)
	{
		exit_error(98, file_from);
	}

	/* close file descriptors */
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exit_error(100, "can't close fd");
	}
}

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	cp_file(file_from, file_to);

	return (0);
}
