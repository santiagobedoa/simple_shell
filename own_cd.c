#include "shell.h"

/**
 * own_cd - changes the working dir of the current shell executon env
 * @args: target directory
 *
 * Return: 1 one success, 0 otherwise.
 */
int own_cd(char **args)
{
	if (args == NULL)
	{
		printf("hola\n");
		return (1);
	}
	else
	{
		printf("hola mundo!\n");
		return (1);
	}
}
