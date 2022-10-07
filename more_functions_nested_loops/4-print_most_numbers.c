#include "main.h"

/**
 * print_most_numbers - print 0 to 9, but 2 and 4
 */

void print_most_numbers(void)
{
	int n;
    n = 48;

    while (n <= 57)
    {
        if (n != 50 && n !=52)
        {
            _putchar(n);
        }
        n++;
    }
    _putchar('\n');
}
