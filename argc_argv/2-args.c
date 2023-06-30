#include <stdio.h>

/**
 * main - function
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
		printf("%d\n", argc);
	return (0);
}
