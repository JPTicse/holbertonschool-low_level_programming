#include "main.h"

/**
* print_alphabet_x10 - Print aplhabet in lowercase ten times
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int l;
	int t;

	for (t = 0; t <= 10; t++)
	{
		for (l = 97; l < 123; l++)
		{
		_putchar(l);
		}
		_putchar('\n');
	}
}
