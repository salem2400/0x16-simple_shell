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
		arguments = parse_line(line);
		stat = exe_cmd(arguments);
		free(line);
		free(arguments);
	} while (stat);
}
