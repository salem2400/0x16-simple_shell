#include "main.h"
/**
 * interactive - function cheac if interactive or not
 *
 * Return: noting
 */
void interactive(void)
{
	char *line;
	char **arguments;
	int stat = -1;

	do {
		printf("-> ");
		line = read_line();
		arguments = parse_line(line);
		stat = execute(arguments);
		free(line);
		free(arguments);
		if (stat >= 0)
		{
			exit(stat);
		}
		} while (stat == -1);
}
