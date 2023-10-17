#include "header.h"

/**
 * semicolon_separate - Separates command recieved from stdin by semicolon
 * @str: String gathered from stdin
 * Return: Parsed strings
 */

char **semicolon_separate(char *str)
{
	char **cmds;
	char *cmd;
	int i;
	int buffsize = 1024;

	if (str[0] == ' ' && str[_strlen(str)] == ' ')
		exit(0);
	if (str == NULL)
		return (NULL);
	cmds = malloc(sizeof(char *) * buffsize);
	if (!cmds)
	{
		free(cmds);
		perror("hsh");
		return (NULL);
	}
	cmd = _strtok(input, ";&");
	for (i = 0; cmd; i++)
	{
		cmds[i] = cmd;
		cmd = tokenizer(NULL, ";&");
	}
	cmds[i] = NULL;

	return (cmds);
}

