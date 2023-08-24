#include "main.h"
/**
 * get_location - finde the PAT
 * @cmd: have the command
 *
 *Return: null
 */
char *get_location(char *cmd)
{
	char *dilm = ":";
	char *path = getenv("PATH");
	char *directory = strtok(path, dilm);
	char *command_path = NULL;

	while (directory != NULL)
	{
		command_path = malloc(strlen(directory) + strlen(cmd) + 2);
		sprintf(command_path, "%s/%s", directory, cmd);
		if (access(command_path, X_OK) == 0)
			return (command_path);
		free(command_path);
		directory = strtok(NULL, dilm);
	}

	return (NULL);
}
