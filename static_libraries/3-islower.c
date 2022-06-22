#include "main.h"

/**
* _islower - show 1 and 0 whether is a lowercase or no
*
*@c: character in ASCI
*
* Return: 1 lowercase, 0 uppercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
