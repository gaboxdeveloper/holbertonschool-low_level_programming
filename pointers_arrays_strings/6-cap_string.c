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
	int i, a;
	char Array[10] = {',', ';', '.', '!', '?', '(', ')', '{', '}', '"'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; Array[a] <= 10; a++)
		{
			if (s[i] == Array[a] && s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
	}
	return (s);
}
