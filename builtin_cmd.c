#include "main.h"
/**
 *
 *
 *
 *
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
 *
 *
 *
 *
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
 *
 *
 *
 */
in my_help(char **arguments)
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
 *
 *
 *
 */
int ny_exit(char **arguments)
{
	return (0);
}
