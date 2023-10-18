#include "shell.h"

/**
 * _strdup - duplicates a string pointed to by s
 * @s: the string
 * Return: a pointer to a null-terminated byte string
 */
char *_strdup(char *s)
{
	size_t len, i;
	char *s2;

	len = _strlen(s);
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		s2[i] = s[i];
	}
	return (s2);
}

