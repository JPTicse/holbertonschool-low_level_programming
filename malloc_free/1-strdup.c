#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
	char *str2;
	int i, len = 0;
	
	len = strlen(str);
	if (str == NULL)
		return (NULL);
	str2 = malloc(sizeof(*str) * len);
	if (str2 == NULL)
		return (NULL);
	for(i = 0; i < len; i++)
		str2[i] = str[i];
	return (str2);
}