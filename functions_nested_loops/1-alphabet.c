#include "main.h"

/**
 * print_alphabet - function for print the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar(10);
}
