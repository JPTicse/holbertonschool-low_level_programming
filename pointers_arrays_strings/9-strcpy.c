#include "main.h"
/**
 * print_array - Print n values of the array
 * @a: The array
 * @n: The n numbers of index
 */
int _strlen(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}
