#include "shell.h"

/**
* _putchar - write a given character to stdout
* @c: The character to be printed
*
* Return: On success 1 otherwise -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _printstr - print a given string
* @str: the string to be printed
* Return: number of characters
*/
int _printstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
