#include "main.h"
/**
 * factorial - Factorial
 * Description: see var
 * @n: given number
 * Return: n or factorial
 */
int factorial(int n)
{
	if (n > 1)

	{
		return (n * factorial(n - 1));
	}
	return (n);
}
