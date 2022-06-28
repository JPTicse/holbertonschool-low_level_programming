#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - blocks of mem malloc
 * @nmemb: numero of members
 * @size: sizze
 * Return: arr
 */
int *array_range(int min, int max)
{
	int *arri, i;

	if (min > max)
		return (NULL);

	arri = malloc(sizeof(int) * (max - min + 1));
	if (!arri)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arri[i] = min;
	return (arri);
}
