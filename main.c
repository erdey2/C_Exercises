#include "shell.h"
/**
 * compare_string - compare two strings.
 * @src: pointer to the first string to be compared.
 * @str: pointer to the second string to be compared.
 *
 * Return: 0 if the strings are equal otherwise -1
 */

int main()
{
size_t n,compared_result;
char *str, *copy_str, *my_exit = "exit", *delim = " ",*cmd,*argv1;
char *loop_argv[1024];
pid_t pid;
int no_read ;


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
			perror("./shell");
			return (1);
		}
	}
	copy_str = malloc(sizeof(char) * no_read);
	string_copier(str, copy_str);
	 compared_result =  compare_str(copy_str, my_exit);
	if(compared_result == 0)
	{
		exit(0);
	}
	tokenzer(copy_str,loop_argv,delim);
	/*old_argv=loop_argv[0];*/
	cmd = loop_argv[0];
argv1= pathfinder(cmd);
if (argv1 == NULL)
  {
perror("./shell");
continue;

  }
 loop_argv[0]=argv1;
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
            wait(&status); 
		
		free(str);
		free(copy_str);
	
		
	}
}
return (0);
}
