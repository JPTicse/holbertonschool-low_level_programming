#include "main.h"

/**
 * print_last_digit - The last number of a digit
 * Description : give the last digit whether its positive or negative
 *@n:The value will take from
 * Return:The last number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

       	_putchar('0' + (n % 10));

	return (n % 10);
}
