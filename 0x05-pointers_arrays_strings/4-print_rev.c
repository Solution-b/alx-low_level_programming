#include "main.h"

/**
 * print_rev -> function that prints a string, in reverse
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)

{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	for (i = i - 1; i >=  0; n--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');

}
