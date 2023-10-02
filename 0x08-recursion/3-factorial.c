#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 * @n: the number to be calculated
 *
 * Return: the number's factorial, if n<0 print -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
