#include "main.h"
/**
 * my_exit - function
 * @arguments: have the commit
 *
 * Return: 0
 */
int my_exit(char **arguments)
{
	if (arguments[1])
	{
		return (atoi(arguments[1]));
	}
	else
	{
	return (0);
	}
}
