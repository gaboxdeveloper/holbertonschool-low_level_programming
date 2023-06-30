#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c, a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	c = a * b;
	printf("%d\n", c);
	return (0);
}
