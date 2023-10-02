#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to be calculated
 *
 * Return: the natural square root of n, if n doesn't have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    if (n == 0 || n == 1)
        return (n);

    int find_sqrt(int n, int i)
    {
        if (i * i == n)
            return (i);
        else if (i * i > n)
            return (-1);
        else
            return (find_sqrt(n, i + 1));
    }

    return (find_sqrt(n, 2));
}

