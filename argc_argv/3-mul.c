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

	c = a * b;
	printf("%d", c);

	if (argv[1] || argv[2])
	{
		printf("Error");
		return (1);
	}
	return (0);
}
