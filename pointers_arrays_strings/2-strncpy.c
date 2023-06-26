#include "main.h"

/**
 * _strncpy - copies src string up to n bytes to dest string
 * @src: input source string to copy to dest
 *
 * @dest: input destination string to copy to
 *
 * @n: input number of bytes to append
 *
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
