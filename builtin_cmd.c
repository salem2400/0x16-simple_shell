#include "main.h"
/**
 * execute - funtion eecute the commend
 *@arguments: have the cmd
 *
 *Return: the commend to the launch func
 */
char *bulitin[] = {
	"cd",
	"help",
	"exit"
};
int (*bulitin_func[])(char **) = {
	&my_cd,
	&my_help,
	&my_exit
};
int num_bulitin()
{
	return (sizeof(bulitin) / sizeof(char *));
}
int execute(char**arguments)
{
	int c ;

	if (arguments[0] == NULL)
		return (1);
	for (c = 0 ; c < num_bulitin() ; c++)
		if (strcmp(args[0], bulitin[c]) == 0)
			returm (*bulitin_func[c](arguments));
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
		if(chdir(arguments[1] != 0))
			perror("error");
	return (1);
}
/**
 * my-help - my command help
 *@arguments: have the command
 *
 * Retuen: 1 on success
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
