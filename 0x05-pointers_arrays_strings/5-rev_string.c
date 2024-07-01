#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char *i = s;
	char *j = s;

	while (*j != '\0')
	{
		j++;
	}
	j--;

	while (i < j)
	{
		char tmp = *i;
		*i = *j;
		*j = tmp;

		i++;
		j--;
	}

}
