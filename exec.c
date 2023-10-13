#include "shell.h"

/**
 * command_excute - replaces currently executing code of a process with another
 * @loop_argv - array of pointers
 *
 * Return: 0
 */
int command_excute(char *loop_argv[])
{
	if (execve(loop_argv[0], loop_argv, NULL) == -1)
	{
		perror("./shell");
		return (3);
	}
	return (0);
}

