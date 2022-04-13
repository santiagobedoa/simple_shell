#include "shell.h"

/**
 * main - function that checks if our shell is called
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (isatty(STDIN_FILENO) == 1)
	{
		shell_interactive();
	}
	/**
	else
	{
		shell_no_interactive();
	}
	*/
	return (0);
}
