#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function
 * @str: fasd
 * Return: c
 */

char *_strdup(char *str)
{
	char *pointer;
	int i, l;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	pointer = malloc(sizeof(char) * (l + 1));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		pointer[i] = str[i];

	pointer[l] = '\0';

	return (pointer);
}
