#include "main.h"

/**
 * _islower - function to know if a characer is lowercase or not
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
