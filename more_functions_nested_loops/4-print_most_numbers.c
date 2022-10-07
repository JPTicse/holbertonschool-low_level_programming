#include "main.h"

/**
 * print_most_numbers - print 0 to 9, but 2 and 4
 */

void print_most_numbers(void)
{
	int n;
    
    n= 48;

	while (n <= 57)
    {
        if (n != 59 && n !=61)
        {
            _putchar(n);
        }
        n++;
    }
	_putchar('\n');
}
