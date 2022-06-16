#include "main.h"
/**
 * print_rev - Print in reverse
 * Description: Show each char of the string
 * @s: The char
 */
void print_rev(char *s)
{
	int len = 0;
/* The next code is to find the lenght of the string */
	for (len = 0; s[len] != '\0'; len++)
	{
	}
/* A loop to start from the final char to the first one */
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
