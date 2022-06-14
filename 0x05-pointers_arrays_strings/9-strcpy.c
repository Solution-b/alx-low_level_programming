#include "main.h"

/**
 *  _strcpy -> Concatenate two strings
 * @dest:  Second string to be concatenated to src
 * @src: first sting to be concatenated to dest
 * Return  pointer to the resulting string dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; dest[y] != '\0'; y++)
	;
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
