#include "shell.h"

/**
 * shell_non_interactive - unix command line interpreter
 *
 * Return: void
 */
void shell_non_interactive(void)
{
	char *line;
	char **args;
	int status;

	do {
		line = read_stream();
		args = split_line(line); /* tokenize line */
		status = execute_args(args);
		/* avoid memory leaks */
		free(line);
		free(args);
	} while (status);
}