#include <stdio.h>
#include <string.h>

/**
 * append_text_to_file - function appends text to a file
 *
 * @filename: poiinter to file
 * @text_content: pointer to the content of the text to be appended
 *
 * Return: 1 if success and -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = fopen(filename, "a");
	if (fd == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fputs(text_content, fd);
	}

	fclose(fd);

	return (1);
}
