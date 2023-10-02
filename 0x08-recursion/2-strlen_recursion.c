#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}

return (index);
}
