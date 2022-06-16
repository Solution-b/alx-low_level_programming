#include "Main.h"
#include <string.h>
/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase.
 * @x: pointer to input char
 * Return: @s
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
		{
			if (x[i] >= 97 && x[i] <= 122)
				x[i] = x[i] - 32;
			i++;
		}
	return (x);
}
