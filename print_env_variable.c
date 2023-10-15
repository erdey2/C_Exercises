#include "shell.h"

/**
 * print_env_variable - print environment variable to stdout
 * Return - 0
 */

void print_env_variable(void)
{
	int x = 0;
	char **env = environ;
	
	while (env[x])
	{
		
		write(STDOUT_FILENO, (const void *)env[x], _strlen(env[x]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
}
