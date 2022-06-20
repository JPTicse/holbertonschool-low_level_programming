#include "main.h"
/**
 * *_memcpy - modify an memory space
 * @dest: Destination
 * @src: The value or source
 * @n: Number of elements.
 *
 * Return: s[]
 */

char *_strchr(char *s, char c)
{
	int len;
	
	for (len = 0; (s[len] != '\0') && (s[len] != c); len++)
	{
	}

	if (s[len] == c)
	{
	return &(s[len]);
	}
	else {
	return (0);
	}
}

