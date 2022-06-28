#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - malloa and If it fails exit with 98 value
 * @b: an integer unsigned
 * Return: Pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lens1 = 0;
	char *s3;
	
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[lens1] != '\0')
		lens1++;
	s3 = malloc(sizeof(char) * (lens1 + n + 1));
	for (i = 0; i < lens1; i++)
		s3[i] = s1[i];
	lens1++;
	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		s3[i] = s2[j];
	j++;
	s3[i] = '\0';
	return (s3);
}
