#include "shell.h"

/**
 * main - entry of the shell program
 *
 * Return: 0 if the program exucute correct
 */

int main(void)
{
	size_t n, num_of_read;
	char *str, *cpy_of_str, *delim = " ";
	char *loop_argv[1024];
	pid_t pid;
	char *prompt = "$ ";

	while (1)
	{
		write(1, prompt, 2);
		str = NULL, n = 0;
		num_of_read = shellgetline(&str, &n);
		if ((str[0] == '\n') && (num_of_read == 1))
			continue;
		cpy_of_str = malloc(sizeof(char) * num_of_read);
		string_copier(str, cpy_of_str);
		tokenzer(cpy_of_str, loop_argv, delim);
		pathfinder(loop_argv);
		pid = fork();
		if (pid < 0)
		{
			perror("./shell");
			return (2);
		}
		else if (pid == 0)
			command_excute(loop_argv);
		else
		{
			int status;

			if (waitpid(pid, &status, 0) == -1)
			{
				perror("./shell");
				exit(1);
			}
			free(str);
			free(cpy_of_str);
		}
	}
	return (0);
}
