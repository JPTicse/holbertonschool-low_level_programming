#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int times;
	int space;

	if (n > 0)
	{
		for (times = 1; times <= n; times++)
		{
			for (space = 1; space < times; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
