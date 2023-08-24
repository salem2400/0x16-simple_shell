#include "main.h"
/**
 * loop - function print the prompet
 *
 * Return - Noting
 */
void loop(void)
{
	char **arguments;
	char *line;
	int stat;

	do {
		printf(":) ");
		line = read_line();
		arguments = pars_line(line);
		stat = execute(arguments);
		free(line);
		free(arguments);
	} while (stat);
}
