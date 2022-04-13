#ifndef SHELL_H
#define SHELL_H

/* LIBRARIES */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/* MACROS */
#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"

/* PROTOTYPES */
/*---main.c---*/
void shell_interactive(void);
void shell_no_interactive(int argc, char *argv[]); /* FALTA COMPLETAR */

/*---shell_interactive---*/
char *read_line(void);
char **split_line(char *line);
int execute_args(char **args);

/*---execute_args---*/
int new_process(char **args);
int num_builtns(void);

/*---builtin---*/
int own_cd(char **args);
int own_exit(char **args);

#endif
