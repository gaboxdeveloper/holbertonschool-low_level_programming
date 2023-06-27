#include "main.h"

/**
 * string_toupper - function
 *
 * @hola: parameter
 *
 * Return: Uppercase letter
 */

char *string_toupper(char *hola)
{
	int i;

	for (i = 0; hola[i] != '\0'; i++)
	{
		if ((hola[i] >= 97) && (hola[i] <= 122))
			hola[i] -= 32;
	}
	return (hola);
}
