#include "main.h"
/**
 * my_help - function helps the user
 * @arguments: have the command
 *
 * Return: 1 on success
 */
int my_help(char **arguments)
{
	int c;


	char *bulitin[13] = {
		"cd",
		"env",
		"help",
		"exit"
	};
	char *des[] = {
		"change the current dir",
		"display inf about the blitin comd",
		"exit the shell:"
		};
	(void)arguments;
	printf("simple shell\n");
	printf("------------\n");
	printf("A basic shell imolementation.\n\n");
	printf("Duilt-in cmd:\n");

	for (c = 0 ; c < num_bulitin(bulitin) ; c++)
	{
		printf(" %s - %s\n", bulitin[c], des[c]);
	}
	return (1);
}
