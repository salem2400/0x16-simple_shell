#include "main.h"
/**
 * my_cd - function my cd
 * @arguments: have the command
 *
 * Return: 1 on success
 */
int my_cd(char **arguments)
{
	if (arguments[1] == NULL)
	{
		fprintf(stderr, "expected argument to 'cd'\n");
	}
	else
	{
		if (chdir(arguments[1]) != 0)
		{
			perror("error in my_cd");
		}
	}
	return (-1);
}
