#include "shell.h"

/**
 * semicolon_separate - Separates command recieved from stdin by semicolon
 * @str: String gathered from stdin
 * Return: Parsed strings
 */

char **semicolon_separate(char *str)
{
	char **cmds;
	char *cmd;
	int buffsize = 1024, i;

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
	cmd = _strtok(str, "&;");
	for (i = 0; cmd; i++)
	{
		cmds[i] = cmd;
		cmd = _strtok(NULL, "&;");
	}
	cmds[i] = NULL;

	return (cmds);
}
