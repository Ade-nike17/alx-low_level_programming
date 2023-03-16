#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char **strtow(char *str)
{
	int i, j, wordcount = 0;
	char **words = NULL;
	int wordlen = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	/* Count the number of words in a string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isspace(str[i]))
		{
			if (i == 0 || isspace(str[i - 1]))
			{
				wordcount++;
			}
		}
	}

	words = (char **) malloc(sizeof(char *) * (wordcount + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isspace(str[i]))
		{
			if (i == 0 || isspace(str[i - 1]))
			{
				while (!isspace(str[i + wordlen]) && str[i + wordlen] != '\0')
				{
					wordlen++;
				}

				words[j] = (char *) malloc(sizeof(char) * (wordlen + 1));
				if (words[j] == NULL)
				{
					for (i = 0; i < j; i++)
					{
						free(words[i]);
					}

					free(words);

					return (NULL);
				}

				strncpy(words[j], &str[i], wordlen);
				words[j][wordlen] = '\0';
				j++;
				i += wordlen;
			}
		}
	}

	words[j] = NULL;

	return (words);
}

