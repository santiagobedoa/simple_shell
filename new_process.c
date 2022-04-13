#include "shell.h"

/**
 * new_process - create a new process
 * @args: array of strings that contains the command and its flags
 *
 * Return: 1 if success, 0 otherwise.
 */
int new_process(char **args)
{
	pid_t pid, wpid;
	int status;

	pid = fork();
	if (pid ==  0)
	{
		/* child process */
		if (execvp(args[0], args) == -1)
		{
			perror("error in execute_args: child process");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		/* error forking */
		perror("error in execute_args: forking");
	}
	else
	{
		/* parent process */
		while (!WIFEXITED(status) && !WIFSIGNALED(status))
		{
			wpid = waitpid(pid, &status, WUNTRACED);
		}
	}
	return (1);
}
