#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

char *read_line(void);
char **parse_line(char *line);
int launch(char **arguments);
int my_cd(char **arguments);
int my_help(char **arguments);
int my_exit(char **arguments);
int num_bulitin(char **bulitin);
int execute(char **arguments);
void loop(void);
char *get_location(char *cmd);

#endif
