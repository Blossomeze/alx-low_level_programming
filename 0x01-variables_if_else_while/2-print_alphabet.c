#include <stdio.h>
#include <ctype.h>

/**
 * main - prints out the alphabets in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter += 1;
	}
	putchar('\n');
	return (0);
}
