#include "main.h"

/**
* print_alphabet: "Print aplhabet in lowercase"
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while  (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}

_putchar('\n');
}
