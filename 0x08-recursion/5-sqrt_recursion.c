#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * Return: If the number has a natural square root - the square root.
 */

int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
