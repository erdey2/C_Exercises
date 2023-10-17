#include "shell.h"

/**
 * string_copier - copy string from its origin
 * @str: pointer to the source string
 * @cpy_of_str: pointer to the destination string
 * Return: 0
 */
int string_copier(char *str, char *cpy_of_str)
{
	int i = 0;
	

	while (str[i])
	{
		cpy_of_str[i] = str[i];
		i++;
	}
	if (cpy_of_str[i - 1] == '\n')
		cpy_of_str[i - 1] = '\0';

	return (0);
}
