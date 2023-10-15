#include "shell.h"

/**
* exit_shell - exits the opened shell
* @cmd: tokenized command
* @line: one line input from stdin
*
* Return: 0
*/

void exit_shell(char **cmd, char *line)
{
	free(line);
	free_buffers(cmd);
	exit(0);
}
