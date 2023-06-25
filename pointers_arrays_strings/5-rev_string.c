#include "main.h"

/**
 * rev_string - reverses string
 * @s: input string
 *
 * @*s: input pointer to string
 *
 */

void rev_string(char *s)
{
	int i, size = 0;
	int start;
	int end;
	char holder;

	for (i = 0; s[i] != 0; i++)
	{
		size++;
	}

	end = size - 1;

	for (start = 0; start < (size / 2); start++)
	{
		holder = s[start];
		s[start] = s[end];
		s[end] = holder;
		end--;
	}
}
