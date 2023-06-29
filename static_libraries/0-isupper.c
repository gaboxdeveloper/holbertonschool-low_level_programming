#include "main.h"

/**
 * _isupper - function to know if its uppercase
 *
 * @c: parameter
 *
 * Return: 0
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
