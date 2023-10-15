#include "shell.h"
int tokenzer(char *copy_str,  char *loop_argv[], char *delim)
{
	char *token = NULL;
	size_t count = 0;
	token = strtok(copy_str, delim);
	while(token)

	{
		loop_argv[count] = token;

		token = strtok(NULL,delim);
		count++;
	}
	loop_argv[count] = NULL;
	
	return (count);
}
