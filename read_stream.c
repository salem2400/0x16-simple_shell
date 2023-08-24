#include "main.h"
/**
 * read_stream - rad a line feom stream
 *
 * Return: pointer that points the read line
 */
char *read_stream(void)
{
	int bsize = 1024;
	int c = 0;
	char *line;
	int character;

	line = malloc(sizeof(char) * bsize);
	if (line == NULL)
	{
		fprintf(stderr, "alocation error in read_stream");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		character = getchar();
		if (character == EFO)
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else if (character == '\n')
		{
			line[c] = '\0';
			return (line);
		}
		else
		{
			line[c] = character;
		}
		c++;
		if (c >= bsize)
		{
			bsize += bsize;
			line = realloc(line, bsize);
			if (line == NULL)
			{
				fprintf(stderr, "reallocation error in read_stream");
				exit(EXIT_FAILURE);
			}
		}
	}
}
