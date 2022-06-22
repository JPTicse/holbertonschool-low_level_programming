#include "main.h"

/**
 * _strlen - Get the lenght of the string
 * @s: String
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
