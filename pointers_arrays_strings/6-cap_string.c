#include "main.h"

/**
 * cap_string - function
 *
 * @s: parameter
 *
 * Return: Uppercase letter
 */

char *cap_string(char *s)
{
	int i;
	char Array[10] = {',', ';', '.', '!', '?', '(', ')', '{', '}', '"'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ',' + 1)
			s -= 32;
	}
}
