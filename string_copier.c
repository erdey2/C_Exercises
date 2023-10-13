#include "shell.h"

/**
 * string_copier - copy string from its origin
 * @str: pointer to the source string
 * @copy: pointer to the destination string
 * Return: 0
 */
int string_copier(char *str, char *copy)
{
	int i = 0;

	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	if (copy[i - 1] == '\n')
		copy[i - 1] = '\0';
	return (0);
}
