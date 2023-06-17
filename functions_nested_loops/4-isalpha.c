#include "main.h"

/**
 * _isalpha - function to know if a characer is in the alphabet
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
