#include "main.h"
/**
 * rev_string - Print in reverse a string
 * Description: Show each char of the string
 * @s: The char
 */
void rev_string(char *s)
{
/* A loop to reverse the [] value with a temp variable */
	int a = 0;
	int b = 0;
	char temp;
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	b = len - 1;

	for (a = 0; a < b; a++, b--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] =  temp;
	}
}
