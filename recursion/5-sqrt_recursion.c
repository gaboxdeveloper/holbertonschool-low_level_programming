#include "main.h"
#include <stdio.h>

int _sqrt(int n, int l);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int _sqrt(int n, int l)
{
	int sqrt = l * l;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (l);

	return (_sqrt(n, l + 1));
}
