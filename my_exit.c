#include "main.h"
/**
 * my_exit - function exiting fromm shell
 * @arguments: have the command
 *
 * Return: 0 on exiting
 */

int my_exit(char **arguments)
{
	if (arguments[1])
	{
		return (atoi(arguments[1]));
	}
	else
	{
		return(0);
	}
	
}
