#include "shell.h"

/**
 * main - the entry point
 * @ac: the total number of arguments (argument count)
 * @argv: the array of pointer strings (argument vector)
 *
 * Return: always 0
 *
 */

int main(int ac, char *argv[])
{
	int no_read;
	size_t n = 0;
	char *str = NULL, *copy_str, *loop_argv[1024];
	pid_t pid;

	while (1)
	{
		prompt();
		while ((no_read = getline(&str, &n, stdin)) == -1)
		{
			if (feof(stdin))
			{
				write(1, "\n", 1);
				break;
			}
			else
			{
				perror(argv[0]);
				return (1);
			}
		}
		if (str == 0)
			continue;
		copy_str = malloc(sizeof(char) * no_read);
		string_copier(str, copy_str);
		loop_argv[0] = copy_str;
		loop_argv[1] = NULL, pid = fork();
		if (pid < 0)
		{
			perror(argv[0]);
			return (2);
		}
		else if (pid == 0)
			command_excute(loop_argv);
		else
		{
			wait(NULL), free(str), free(copy_str), free(loop_argv[1]);
			return (0);
		}
	}
}
