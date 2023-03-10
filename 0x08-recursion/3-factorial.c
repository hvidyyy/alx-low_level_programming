#include "main.h"

/**
* factorial - a function that returns the factorial of a given number.
*
* @n: an integer.
*
* Return: the factorial of a given number.
*/
int factorial(int n)
{
	if (n > 0)
	{
		return (factorial(n - 1) * n);
	}
	else if (n == 0)
		return (1);
	return (-1);
}
