#include "main.h"
/**
 * *_strncat - Concatenate 2 stringsi
 * @dest: Pointer to Array.
 * @n: The numbers os char will go to dest
 * @src: Number of elements.
 * Description: see variable
 * Return: "s1"+"s2"
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; (j < n) && (src[j] != '\0'); i++, j++)
	{
	dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

