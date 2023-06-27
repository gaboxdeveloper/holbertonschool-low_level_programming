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
	int i, a, c;
	char Array[] = {',', ';', '.', '!', '?', '(', ')', '{', '}', '"', ' '};
	
	c = 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - c;
		}
		c = 0;
		for (a = 0; Array[a] != '\0'; a++)
		{
			if (Array[a] == s[i])
			{
				c = 32;
				break;
			}
		}
	}
	return (s);
}
