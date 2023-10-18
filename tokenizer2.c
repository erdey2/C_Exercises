#include "shell.h"

/**
 * delimiter_checker - checks if a character matchs a given character
 * @c: character to be checked
 * @s: string of delimiters
 * Return: 1 on success, 0 otherwise
 */
unsigned int delimiter_checker(char c, const char *s)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (c == s[i])
			return (1);
	}
	return (0);
}

/**
 * _strtok - searches for tokens in s1
 * @s1: source string.
 * @s2: token separators.
 * Return: the address of the next token or NULL
 */
char *_strtok(char *s1, const char *s2)
{
	static char *tokens;
	static char *p;
	unsigned int i;

	if (str != NULL)
		p = s1;
	tokens = p;
	if (tokens == NULL)
		return (NULL);
	for (i = 0; tokens[i] != '\0'; i++)
	{
		if (delimiter_checker(tokens[i], s2) == 0)
			break;
	}
	if (p[i] == '\0' || p[i] == '#')
	{
		p = NULL;
		return (NULL);
	}
	tokens = p + i;
	p = tokens;
	for (i = 0; p[i] != '\0'; i++)
	{
		if (delimiter_checker(p[i], s2) == 1)
			break;
	}
	if (p[i] == '\0')
		p = NULL;
	else
	{
		p[i] = '\0';
		p = p + i + 1;
		if (*p == '\0')
			p = NULL;
	}
	return (tokens);
}
