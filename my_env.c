#include "main.h"
/**
 * my_env - function that prints env variable
 * @arguments: arguments
 *
 * Return: 1 on success 0 in otherwise
 */
int my_env(char **arguments)
{
	int c = 0;
	(void)(**arguments);

	while (environ[c])
	{
		write(STDOUT_FILENO, environ[c], strlen(environ[c]));
		write(STDOUT_FILENO, "\n", 1);
		c++;
	}
	return (-1);

}
