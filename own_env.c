#include "shell.h"

/**
 * own_env - function that prints enviroment variables
 * @args: arguments
 *
 * Return: 1 on success, 0 otherwise
 */
int own_env(char **args)
{
	int i = 0;

	if (args)
	{
		for (; environ[i]; i++)
		{
			write(1, environ[i], strlen(environ[i]));
			write(1, "\n", 1);
		}
	}
	return (1);
}
