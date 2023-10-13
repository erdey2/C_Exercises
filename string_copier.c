#include "shell.h"
/**
 *string_copier - copy string from its origin
 *(source) to destination.
 * @str: pointer to the source string
 * @cpy: pointer to the destination string
 */
int string_copier(char *str, char *copy)
{
	int i = 0;

	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	 if (copy[i -1]== '\n')
	  copy[i-1] = '\0';
	return (0);
}
