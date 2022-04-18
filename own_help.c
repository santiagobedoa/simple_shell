#include "shell.h"

/**
 * own_help - print help
 * @args: arguments
 *
 * Return: 1 on success, 0 otherwise
 */
int own_help(char **args)
{
	char *builtin_func_list[] = {
		"cd",
		"env",
		"help",
		"exit"
	};
	int i = 0;

	if (args)
	{
		printf("simple shell");
		printf("Type a command and its arguments and hit enter");
		for (; i < num_builtins(); i++)
		{
			printf("  ->%s\n", builtin_func_list[i]);
		}
	}
	printf("Use the man command for information on other programs.\n");
	return (1);
}
