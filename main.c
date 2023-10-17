#include "shell.h"

/**
 * main - entry of the shell program
 *
 * Return: 0 if the program exucute correct
 */

int main(int ac, char **argv)
{
	size_t n, num_of_read;
	char *str, *cpy_of_str, *delim = " ", *argv1 = argv[0];
	char *loop_argv[1024];
	pid_t pid;
	char *prompt = "$ ";
(void)(ac);

	while (1)
	{
		write(1, prompt, 2);
		fflush(stdout);
		str = NULL, n = 0;
		num_of_read = shellgetline(&str, &n);
		if ((str[0] == '\n') && (num_of_read == 1))
			continue;
		cpy_of_str = malloc(sizeof(char) * num_of_read);
		string_copier(str, cpy_of_str);
		tokenzer(cpy_of_str, loop_argv, delim);
		command_check(loop_argv);
		pathfinder(loop_argv);
		pid = fork();
		if (pid < 0)
		{
			perror(argv1);
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
