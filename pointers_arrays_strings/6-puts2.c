#include "main.h"
/**
 * puts2 - Print in reverse a string
 * Description: Show each char of the string
 * @str: The char
 */
void puts2(char *str)
{
/* A loop to reverse the [] value with a temp variable */
int i = 0;
int len = 0;
	for (len = 0; str[len] != '\0'; len++)
	{
	}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
