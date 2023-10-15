#include "shell.h"

/**
 * main - the entry point.
 * Return: 0
 */
int main(void)
{
	size_t n = 0, compared_result, no_read;
	char *str = NULL, *copy_str, *my_exit = "exit", *delim = " ", *cmd, *argv1;
	char *loop_argv[1024], *my_env = "env";
	pid_t pid;

	while (1)
	{
		prompt();
		no_read = getline(&str, &n, stdin);
		if (no_read == -1)
		{
			if (feof(stdin))
			{
				write(1, "\n", 1), exit(0);
			}
			else
			{
				perror("./shell");
				return (1);
			}
		}
		if ((str[0] == '\n') && (no_read == 1))
			continue;
		copy_str = malloc(sizeof(char) * no_read);
		string_copier(str, copy_str);
		compared_result = compare_str(copy_str, my_exit);
		if (compared_result == 0)
			exit(0);
		compared_result = compare_str(copy_str, my_env);
		if (compared_result == 0)
		{
			print_env_variable();
			continue;
		}
		tokenzer(copy_str, loop_argv, delim);
		cmd = loop_argv[0], argv1 = pathfinder(cmd);
		if (argv1 == NULL)
		{
			perror("./shell");
			continue;
		}
		loop_argv[0] = argv1, pid = fork();
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

			wait(&status), free(str), free(copy_str);
		}
	}
	return (0);
}
