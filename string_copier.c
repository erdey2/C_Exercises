#include "shell.h"

/**
 * string_copier - copy string from its origin
 * @str: pointer to the source string
 * @copy: pointer to the destination string
 * Return: 0
 */
int string_copier(char *str, char *cpy_of_str)
{
	int i = 0;
	ssize_t compared_result ;
	char *my_exit = "exit", *my_env ="env";

	while (str[i])
	{
		cpy_of_str[i] = str[i];
		i++;
	}
	if (cpy_of_str[i - 1] == '\n')
		cpy_of_str[i - 1] ='\0';
	compared_result =  compare_str (cpy_of_str, my_exit);
		if(compared_result == 0)
			exit(0);
		compared_result = compare_str(cpy_of_str, my_env);
		if (compared_result == 0)
		{
			print_env_variable();
			return (0);
		}

	return (0);
}
