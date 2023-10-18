#include "shell.h"
/**
* _strlen - returns the length of a string
* @s: the string
*
* Return: returns length of string
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
