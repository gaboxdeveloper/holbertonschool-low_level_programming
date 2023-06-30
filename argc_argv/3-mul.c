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
	int c;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		c = a * b;
		printf("%d\n", c);
		return (0);
	}
}
