#include "main.h"

/**
* _isalpha - show 1 if its a letter
*
*@c: character in ASCI
*
* Return: show 1 if its a letter else 0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
