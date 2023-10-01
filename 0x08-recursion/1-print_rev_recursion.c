#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints out a string in reverse
 *
 * @s: pointer to the string to be printed
 *
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_print_rev_recursion(s - 1);
	}
}
