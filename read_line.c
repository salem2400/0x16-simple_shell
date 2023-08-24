#include "main.h"
/**
 * read_line - read a line from stdin
 *
 * Return: pointer points to str
 */

char *read_line(void)
{
	size_t bsize = 0;
	char *line = NULL;

	if (getline(&line, &bsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(line);
			perror("erorr while reading the line from stdin");
			exit(EXIT_FAILURE);
		}
	}
	return (line);

}
