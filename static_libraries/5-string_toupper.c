#include "main.h"
/**
 * *string_toupper- Concatenate 2 stringsi
 * @p: Pointer to Array
 * Description: see variable
 * Return: n
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] -= 32;
		}
	}
	return (p);
}
