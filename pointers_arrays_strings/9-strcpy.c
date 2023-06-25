#include "main.h"

/**
 * _strcpy - copies string from pointer src to pointer dest
 * @src: input pointer to source string
 *
 * @dest: input pointer to destination for copy of string
 *
 * Return: the pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != 0; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
