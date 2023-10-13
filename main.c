#include "shell.h"
/**
 * compare_string - compare two strings.
 * @src: pointer to the first string to be compared.
 * @str: pointer to the second string to be compared.
 *
 * Return: 0 if the strings are equal otherwise -1
 */

int main(int ac, char *argv[])
{
size_t no_read, n, i,compared_result;
char *str, *copy_str, *my_exit = "exit", *delim = " ", cmd;
char *loop_argv[1024];
pid_t pid;

while (1)
{
	prompt();
	str = NULL;
	n = 0;
	no_read = getline (&str, &n, stdin);
	if (no_read == -1)
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
	copy_str = malloc(sizeof(char) * no_read);
	string_copier(str, copy_str);
	 compared_result = compare_string(copy_str, my_exit);
	if(compared_result == 0)
	{
		break;
	}
	tokenzer(copy_str,loop_argv,delim);
	
	pathfinder(loop_argv);
printf("%s  from main \n",loop_argv[0]);
	pid = fork();
	if (pid < 0)
	{
		perror(argv[0]);
		return (2);
	}
	else if (pid == 0)
		command_excute(loop_argv);
	else
	{
		wait(NULL);
		free(str);
		free(copy_str);
		// for(i = 0; loop_argv[i] != NULL;i++)
		// free(loop_argv[i]);
		return (0);
	}
}
return (0);
}
