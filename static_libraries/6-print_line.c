#include "main.h"
/**
* print_line - Write _ n times.
* @n: Integer amount of _
*/
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
