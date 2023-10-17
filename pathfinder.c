#include "shell.h"

/**
 * pathfinder - finds the path
 * @loop_argv: array of pointers
 *
 * Return: 0
 *
 */
int pathfinder(char *loop_argv[])
{
	char *delim = ":", *my_path, *copy_path, *cmd = loop_argv[0];
	char *path_argv[1024];
	struct stat buffer;
	int i, count;

	my_path = getenv("PATH");
	if (my_path)
	{
		for (count = 0; my_path[count]; count++)
			;
		copy_path = malloc(count);
		string_copier(my_path, copy_path);
		tokenzer(copy_path, path_argv, delim);
		i = 0;
		while (path_argv[i])
		{
			_strcat(path_argv[i], "/");
			_strcat(path_argv[i], cmd);
			if (stat(path_argv[i], &buffer) == 0)
			{
				if (path_argv[i] == NULL)
				{
					free(copy_path);
					perror("./shell");
					return (0);
				}
				else
				{
					free(copy_path);
					loop_argv[0] = path_argv[i];
				
				
				
					return (0);
				}
			}
			i++;
		}
	}
	return (0);
}
