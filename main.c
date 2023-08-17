#include "header.h"
/*
 *
 *
 */
int main(int argc, char **argv)
{
	char *pprombet = "($) ";
	char *str = NULL;
	char *str_cpy = NULL;
	size_t t;
	ssize_t num_chars = 0;
	char *tokens = NULL;
	char *d = "\n";
	int l;
	int num_tokens;

	void(argc);
	while (1)
		printf("%s", pprombet);
		num_chars = gitline(&str, &t, stdin);
		if (unm_chars == -1)
			return (-1);
		str_cpy = malloc(sizeof(char) * num_chars);
		if (str_cpy == NULL)
			perror("tsh: memory allocation error");
			return (-1);
		strcpy(str_cpy, str);
		tokens = strtok(str, d);
		while (tokens != NULL)
			num_tokens++
				tokens = strtok(NULL, d);
		num_tokens++;
		argv = malloc(sizeof(char *) * num_tokens);
		if (argv == NULL)
			return (-1);
		tokens = strtok(str_cpy, d);
		for (i = 0 ; tokens != NULL ; i++)
			argv[l] = malloc(sizeof(char) * strlen(tokens));
			token = strtok(NULL, d);
			strcpy(argv[l], str_cpy);
	execmd(argv);
	argv[i] = NULL;
	free(str_cpy);
	free(str);
	return (0);
}
