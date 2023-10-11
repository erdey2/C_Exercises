/**
 *string_copier - copy string from its origin
 *(source) to destination.
 * @str: pointer to the source string
 * @cpy: pointer to the destination string
 */
void string_copier(char *str, char *cpy)
{
	int i = 0;

	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
}
