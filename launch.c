#include "main.h"
/**
 * launch - function that charge of prossing
 * @arguments: have the commend
 *
 * Return: i on success
 */
int launch(char **arguments)
{
	pid_t pid;
	pid_t wpid;
	int stat;

	char *command_path = get_location(arguments[0]);

	if (command_path == NULL)
		{
		fprintf(stderr, "No such file or directory\n");
		return (1);
		}



	pid = fork();
	if (pid == 0)
	{
		char *env[] = {NULL};

		if (execve(command_path, arguments, env) == -1)
			perror("error");
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("error");
	}
	else
	{
		do {
			wpid = waitpid(pid, &stat, WUNTRACED);
		} while (!WIFEXITED(stat) && !WIFSIGNALED(stat));
	}
	free(command_path);
	(void)wpid;
	return (1);
}
