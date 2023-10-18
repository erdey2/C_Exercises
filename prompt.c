#include "shell.h"

/**
 * prompt - display the command prompt
 *
 * Return: void
 */
void prompt(void)
{
	char *prompt = "$ ";

	write(1, prompt, 2);
}
