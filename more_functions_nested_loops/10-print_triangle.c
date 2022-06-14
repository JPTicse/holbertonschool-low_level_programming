#include "main.h"

/**
 * print_triangle - print 'triangule'
 * @size: size of
 */

void print_triangle(int size)
{
	int times;
	int space;
	int tri;

	if (size <= 0)
		_putchar('\n');

	for (times = 1; times <= size; times++)
	{
		for (space = 1; space <= (size - times); space++)
			_putchar(' ');

		for (tri = 1; tri <= times; draw++)
			_putchar('#');

		_putchar('\n');
	}
}
