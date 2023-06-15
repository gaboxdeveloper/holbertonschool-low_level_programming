#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of the program
 * description: variables, if, else and while
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (n == 0)
		printf("Last digit of %d is and %d is 0\n", n, ld);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is and %d is less than 6 and not 0\n", n, ld);
	return (0);
}
