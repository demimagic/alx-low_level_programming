#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string to a newly allocated memory space
 * @str: string to duplicate
 *
 * Return: pointer to the new string or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[i] = '\0';

	return (new_str);
}
