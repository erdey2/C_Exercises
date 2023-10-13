#include "shell.h"

/**
 * compare_string - compare two strings.
 * @src: pointer to the first string to be compared.
 * @str: pointer to the second string to be compared.
 *
 * Return: 0 if the strings are equal otherwise -1
 */
int compare_string(char *src, char *str)
{
	int i, j, k = 0, sum = 0;

	for (i = 0; src[i]; i++)
		;
	for (j = 0; str[j]; j++)
		;
	if (i != j)
		return (-1);
	while (src[k] && src[k])
	{
		sum = sum + (src[k] - str[k]);
		k++;
	}
	if (sum == 0)
		return (0);
	return (-1);
}
				}

