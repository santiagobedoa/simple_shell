#include "shell.h"

/**
 * read_line - read a line from stdin
 *
 * Return: pointer that points to a str with the line content
 */
char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1) /* if getline fails */
	{
		if (feof(stdin)) /* test for the eof */
		{
			exit(EXIT_SUCCESS); /* we recieved an eof */
		}
		else
		{
			perror("error in read_line: getline");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}
