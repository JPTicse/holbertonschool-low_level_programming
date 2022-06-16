#include "main.h"
/**
 * puts_half - Print in reverse a string
 * Description: Show thr last part of the string
 * @str: The char
 */
void puts_half(char *str)
{
/*A loop to know the lenght and print the last half*/
int i = 0;
int len = 0;
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len / 2) - 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
