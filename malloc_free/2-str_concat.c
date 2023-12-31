#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function
 * @s1: fasd
 * @s2: asdf
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s12, a, b;

	s12 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		s12++;
	for (b = 0; s2[b]; b++)
		s12++;

	concat = malloc(sizeof(char) * (s12 + 1));
	if (concat == NULL)
		return (NULL);

	strcat(concat, s1);
	strcat(concat, s2);

	return (concat);
}
