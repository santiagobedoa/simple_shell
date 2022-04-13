#include "shell.h"

/**
 * shell_no_interactive - unix command line interpreter
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
void shell_no_interactive(int argc, char *argv[])
{
	if (argc && argv)
	{
		printf("shell_no_interactive\n");
	}
}
