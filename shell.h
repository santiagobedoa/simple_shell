#ifndef SHELL_H
#define SHELL_H

/* LIBRARIES */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/* MACROS */
#define TOK_DELIM " \t\r\n\a\""
extern char **environ;

/* PROTOTYPES */
/*---main.c---*/
void shell_interactive(void);
void shell_non_interactive(void);

/*---shell_interactive---*/
char *read_line(void);
char **split_line(char *line);
int execute_args(char **args);

/*---shell_non_interactive---*/
char *read_stream(void);

/*---execute_args---*/
int new_process(char **args);
int num_builtins(void);

/*---builtin---*/
int own_cd(char **args);
int own_exit(char **args);
int own_env(char **args);
int own_help(char **args);

#endif
