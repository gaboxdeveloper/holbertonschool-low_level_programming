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
	
	for (a = 0; Array[a] <= 10; a++)
		;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == a)
			s -= 32;
	}
	return (s);
}
