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
	int stat;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(arguments[0], arguments) == -1)
		{
			perror("error in new_process: child process");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("error in new_process: forking");
	}
	else
	{
		do {
			waitpid(pid, &stat, WUNTRACED);
		} while (!WIFEXITED(stat) && !WIFSIGNALED(stat));
	}
	return (-1);
}
