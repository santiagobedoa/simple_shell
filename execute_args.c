#include "shell.h"

/**
 * num_builtins - return the number of builtin functions
 *
 * Return: number of builtin functions
 */
int num_builtins(void)
{
	char *builtin_func_list[] = {
		"cd",
		"env",
		"help",
		"exit"
	};

	return (sizeof(builtin_func_list) / (sizeof(char *)));
}

/**
 * execute_args - map if command is a builtin or a process
 * @args: command and its flags
 *
 * Return: 1 on sucess, 0 otherwise
 */
int execute_args(char **args)
{
	char *builtin_func_list[] = {
		"cd",
		"env",
		"help",
		"exit"
	};
	int (*builtin_func[])(char **) = {
		&own_cd,
		&own_env,
		&own_help,
		&own_exit
	};
	int i = 0;

	if (args[0] == NULL)
	{
		/* empty command was entered */
		return (-1);
	}
	for (; i < num_builtins(); i++)
	{
		if (strcmp(args[0], builtin_func_list[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}
	return (new_process(args));
}
