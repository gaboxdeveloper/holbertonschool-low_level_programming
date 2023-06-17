#include "main.h"

/**
 * print_alphabet_x10 - function for print the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 1; i < 11; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	}
}
