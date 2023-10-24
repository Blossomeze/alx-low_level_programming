#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print whether the number stored in the variable n is positive or negative
 *
 * Return:0 on success
 */
int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdig = n % 10;
	if (lastdig > 5)
	{
		printf("The last digit is %d and is greater than 5\n", n);
	}
	else if (lastdig < 6 && lastdig != 0)
	{
		printf("The last digit is %d and is less than 6 and not 0\n", n);
	}
	else if (lastdig == 0)
	{
		printf("The last digit is %d and is 0\n", n);
	}
	return (0);
}
