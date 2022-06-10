#include "main.h"

/**
 * print_last_digit - The last number of a digit
 * Description : give the last digit whether its positive or negative
 *@ld: Last digit
 *@n:The value will take from
 * Return:The last number
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		{
		_putchar(-ld + 48);
	return (-ld);
		}
	else
	{
	_putchar(ld + 48);
	return (ld);
	}
}
