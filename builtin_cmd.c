#include "main.h"
/**
 * num_bulitin - function to calc the size of bulitin
 *
 * Return: num of size bulitin
 */
int num_bulitin(void)
{
	return (sizeof(bulitin) / sizeof(char *));
}
/**
 * execute - funcrion that ece the command
 * @arguments: have the command
 *
 * Return: lanch function
 */
int execute(char **arguments)
{
	int (*bulitin_func[])(char **) = {&my_cd, &my_help, &my_exit};
	char *bulitin[] = {"cd", "help", "exit"};
	int c;

	if (arguments[0] == NULL)
		return (1);
	for (c = 0 ; c < num_bulitin() ; c++)
		if (strcmp(args[0], bulitin[c]) == 0)
			return ((*bulitin_func[c])(arguments));
	return (launch(arguments));
}
/**
 * my_cd - function have my cd command
 * @arguments: have the command
 *
 * Return: 1 n success
 */
int my_cd(char **arguments)
{
	if (arguments[1] == NULL)
		fprintf(stderr, "expected argument to \'cd\"\n");
	else
		if (chdir(arguments[1] != 0))
			perror("error");
	return (1);
}
/**
 * my_help - my command help
 *@arguments: have the command
 *
 * Return: 1 on success
 */
int my_help(char **arguments)
{
	int c;

	printf("Mostafa samir LSH\n");
	printf("Type program name and argument, and press enter.\n");
	printf("the following are built in:\n");

	for (c = 0 ; c < num_bulitin(); c++)
		printf(" %s\n", bulitin[c]);
	printf("Ude the man command for informayion on other program.\n");
	return (1);
}
/**
 * my_exit - function have my exit command
 * @arguments: have the exit command
 *
 * Return: 0 on exting
 */
int my_exit(char **arguments)
{
	return (0);
}
