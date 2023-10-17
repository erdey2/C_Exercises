#include "shell.h"

/**
 * set_env - sets an array of Enviroment Variables
 * @evi: Array of pointers 
 */

void _setenv(char **evi)
{
	int i;

	for (i = 0; environ[i]; i++)
		evi[i] = _strdup(environ[i]);
	evi[i] = NULL;
}

/**
 * unset_env - Frees the environment variables
 * @env:  Array of pointer of Environment variables
 */
void _unset(char **env)
{
	int i;

	for (i = 0; env[i]; i++)
	{
		free(env[i]);
	}
}
