#include "shell.h"

/**
 * compare_str - compare two strings.
 * @str: pointer to the first string to be compared.
 * @new: pointer to the second string to be compared.
 *
 * Return: 0 if the strings are equal otherwise -1
 */
int compare_str(char *str, char *new)
{
	int i, j, k = 0, sum = 0;

	for (i = 0; str[i]; i++)
		;
	for (j = 0; new[j]; j++)
		;
	if (i != j)
		return (-1);
	while (str[k] && new[k])
	{
		sum = sum + (str[k] - new[k]);
		k++;
	}
	if (sum == 0)
		return (0);
	return (-1);
}
